#include "simclient.h"

#include "simmodules/simmodulefactory.h"

SimClient::SimClient(QTcpSocket *socket)
    : _socket(socket)
{
    connect(_socket, SIGNAL(readyRead()), this, SLOT(readData()));
}

SimModule *SimClient::module(uint16_t idModule, uint16_t idPeriph) const
{
    QMap<uint32_t, SimModule*>::const_iterator localConstFind = _modules.constFind((uint32_t)((idModule<<16) + idPeriph));
    if(localConstFind != _modules.constEnd())
        return *localConstFind;
    return NULL;
}

void SimClient::writeData(uint16_t moduleId, uint16_t periphId, uint16_t functionId, const QByteArray &data)
{
    char header[6];
    QByteArray packet;

    ((uint16_t*)header)[0] = data.size()+8;
    ((uint16_t*)header)[1] = moduleId;
    ((uint16_t*)header)[2] = periphId;
    ((uint16_t*)header)[3] = functionId;
    packet.append(header, 8);
    packet.append(data);

    _socket->write(packet);
}

void SimClient::readData()
{
    _dataReceive.append(_socket->readAll());
    while(_dataReceive.size()>6)
    {
        unsigned short sizePacket = *((short*)_dataReceive.mid(0,2).data());

        if(sizePacket>_dataReceive.size())
            return;

        unsigned short moduleId = *((short*)_dataReceive.mid(2,2).data());
        unsigned short periphId = *((short*)_dataReceive.mid(4,2).data());
        unsigned short functionId = *((short*)_dataReceive.mid(6,2).data());
        QByteArray data = _dataReceive.mid(8, sizePacket-8);

        SimModule *modulePtr = module(moduleId, periphId);
        if(!modulePtr)
        {
            modulePtr = SimModuleFactory::getSimModule(this, moduleId, periphId);
            if(!modulePtr)
            {
                qDebug()<<"Unknow module"<<moduleId<<sizePacket;
                _dataReceive = _dataReceive.mid(sizePacket);
                continue;
            }

            _modules.insert((uint32_t)((moduleId<<16) + periphId), modulePtr);
        }

        modulePtr->pushData(functionId, data);

        _dataReceive = _dataReceive.mid(sizePacket);
    }
}
