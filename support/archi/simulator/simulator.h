 /**
 * @file simulator.h
 * @author Sebastien CAUX (sebcaux)
 * @copyright Robotips 2016
 *
 * @date November 3, 2016, 22:44 PM
 *
 * @brief Simulator for debug purpose
 */

#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <stdint.h>
#include <driver/device.h>

#include "simulator_socket.h"
#include "simulator_pthread.h"

void simulator_init();
void simulator_end();
void simulator_send(uint16_t moduleId, uint16_t functionId, const char *data, size_t size);

#endif // SIMULATOR_H
