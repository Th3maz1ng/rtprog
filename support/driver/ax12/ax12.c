/**
 * @file ax12.h
 * @author Sebastien CAUX (sebcaux) / Charles-Antoine NOURY (CharlyBigoud)
 * @copyright Robotips 2016
 *
 * @date April 16, 2016, 14:41 PM 
 * 
 * @brief AX12 servomotor support
 */

#include "ax12.h"

// BE CAREFUL : this code is awful but... it works

unsigned char idr=255;
unsigned char buffr[30];
unsigned char trame[20],idax,size;

#define axSendMode() U1MODEbits.STSEL = 1; RWB=1; idr = 0

void axRecMode()
{
	unsigned char rec;
	U1MODEbits.STSEL = 0;
	RWB = 0;
	//idr = 0;
	/*if(U1STAbits.OERR==1)
	{
		rec=U1RXREG;
		U1STAbits.OERR=0;
	}*/
}	

void setup_AX(void)
{
	setup_uart_AX();
}

void setup_uart_AX(void)
{
	// U1MODE bits configuration
	U1MODEbits.USIDL = 0;		// Continue operation in Idle mode
	U1MODEbits.IREN = 0;		// IrDA encoder and decoder are disabled
	U1MODEbits.RTSMD = 0;		// UxRTS is in Flow Control mode
	U1MODEbits.UEN = 0;			// UxTX and UxRX pins are enabled and used; UxCTS, UxRTS and BCLKx pins are controlled by port latches
	U1MODEbits.WAKE = 0;		// Wake-up is disabled
	U1MODEbits.LPBACK = 0;		// Loopback mode is disabled
	U1MODEbits.ABAUD = 0;		// Baud rate measurement disabled
	U1MODEbits.URXINV = 0;		// UxRX Idle state is ‘1’
	U1MODEbits.BRGH = 1;		// Low-speed mode
	U1MODEbits.PDSEL = 0b00;	// 8-bit data, no parity
	U1MODEbits.STSEL = 0;		// 1 Stop bit
	U1MODEbits.UARTEN = 1;		// UARTx is enabled
	
	// U1STA bits configuration
	U1STAbits.UTXISEL1 = 0;		// Interrupt is generated when the last transmission is over
	U1STAbits.UTXINV = 0;		// UxTX Idle state is ‘1’
	U1STAbits.UTXISEL0 = 1;		// Interrupt is generated when the last transmission is over
	U1STAbits.UTXBRK = 0;		// Sync Break transmission is disabled
	U1STAbits.UTXEN = 1;		// UARTx transmitter enabled
	U1STAbits.URXISEL = 0;		// Interrupt flag bit is set when a character is received
	
	// Baud rate generator
	U1BRG = 9;
	//                   FCY
	// baudRate = -----------------		(with BRGH=1)
	//             4 * (UXBRG + 1)
	
	// Uart Interrupt
	IPC2bits.U1RXIP = 5;		// Interrupt priority for receptor
	IPC3bits.U1TXIP = 6;		// Interrupt priority for transmitor
	U1TXIE = 0;
	U1RXIE = 1;
}

void send_char_ax(unsigned char addr, unsigned char param, unsigned char val)
{
	int p;
	axSendMode();
	trame[0]=0xFF;
	trame[1]=0xFF;
	trame[2]=addr;
	trame[3]=4;
	trame[4]=INST_WRITE;
	trame[5]=param;
	trame[6]=val;
	trame[7]=~(unsigned char)(trame[2]+trame[3]+trame[4]+trame[5]+trame[6]);
	size=8;
	idax=0;
	U1TXREG = trame[0];
	U1TXIE = 1;
	//for(p=0;p<100;p++);
	//while(U1TXIE==1);
	//for(p=0;p<100;p++);
	//idr=0;
	//axRecMode();
}

void send_short_ax(unsigned char addr, unsigned char param, unsigned short val)
{
	int p;
	axSendMode();
	trame[0]=0xFF;
	trame[1]=0xFF;
	trame[2]=addr;
	trame[3]=5;
	trame[4]=INST_WRITE;
	trame[5]=param;
	trame[6]=val;
	trame[7]=*((char*)(&val)+1);
	trame[8]=~(unsigned char)(trame[2]+trame[3]+trame[4]+trame[5]+trame[6]+trame[7]);
	size=9;
	idax=0;
	U1TXREG = trame[0];
	U1TXIE = 1;
	//for(p=0;p<100;p++);
	//while(idax!=size);
	//for(p=0;p<100;p++);
	//idr=0;
	//axRecMode();
}

void send_dbshort_ax(unsigned char addr, unsigned char param, unsigned short val, unsigned short val2)
{
	int p;
	axSendMode();
	trame[0]=0xFF;
	trame[1]=0xFF;
	trame[2]=addr;
	trame[3]=7;
	trame[4]=INST_WRITE;
	trame[5]=param;
	trame[6]=val;
	trame[7]=*((char*)(&val)+1);
	trame[8]=val2;
	trame[9]=*((char*)(&val2)+1);
	trame[10]=~(unsigned char)(trame[2]+trame[3]+trame[4]+trame[5]+trame[6]+trame[7]+trame[8]+trame[9]);
	size=11;
	idax=0;
	U1TXREG = trame[0];
	U1TXIE = 1;
	//for(p=0;p<100;p++);
	//while(idax!=size);
	//for(p=0;p<100;p++);
	//idr=0;
	//axRecMode();
}

void send_trishort_ax(unsigned char addr, unsigned char param, unsigned short val, unsigned short val2, unsigned short val3)
{
	int p;
	axSendMode();
	trame[0]=0xFF;
	trame[1]=0xFF;
	trame[2]=addr;
	trame[3]=9;
	trame[4]=INST_WRITE;
	trame[5]=param;
	trame[6]=val;
	trame[7]=*((char*)(&val)+1);
	trame[8]=val2;
	trame[9]=*((char*)(&val2)+1);
	trame[10]=val3;
	trame[11]=*((char*)(&val3)+1);
	trame[12]=~(unsigned char)(trame[2]+trame[3]+trame[4]+trame[5]+trame[6]+trame[7]+trame[8]+trame[9]+trame[10]+trame[11]);
	size=13;
	idax=0;
	U1TXREG = trame[0];
	U1TXIE = 1;
	//for(p=0;p<100;p++);
	//while(idax!=size);
	//for(p=0;p<100;p++);
	//idr=0;
	//axRecMode();
}

void read_param_ax(unsigned char addr, unsigned char param, unsigned char nbParam)
{
	int p;
	axSendMode();
	trame[0]=0xFF;
	trame[1]=0xFF;
	trame[2]=addr;
	trame[3]=4;
	trame[4]=INST_READ;
	trame[5]=param;
	trame[6]=nbParam;
	trame[7]=~(unsigned char)(trame[2]+trame[3]+trame[4]+trame[5]+trame[6]);
	size=8;
	idax=0;
	U1TXREG = trame[0];
	U1TXIE = 1;
	//for(p=0;p<100;p++);
	//while(idax!=size);
	//for(p=0;p<100;p++);
	//axRecMode();
}

unsigned char parseResponse6(unsigned char addr, unsigned short *pos, unsigned short *speed, unsigned short *load)
{
	unsigned char sum,i;
	for(i=6;i<20;i++) if(buffr[i]==0xFF && buffr[i+1]==0xFF) break;
	if(buffr[i+1]!=0xFF) return 0;
	if(buffr[i+2]!=addr) return 0;
	sum=~(unsigned char)(buffr[i+2]+buffr[i+3]+buffr[i+4]+buffr[i+5]+buffr[i+6]+buffr[i+7]+buffr[i+8]+buffr[i+9]+buffr[i+10]);
	if(buffr[i+11]!=sum) return 0;
	*pos=(unsigned short)buffr[i+6]*256+buffr[i+5];
	*speed=(unsigned short)buffr[i+8]*256+buffr[i+7];
	*load=(unsigned short)buffr[i+10]*256+buffr[i+9];
	return 1;
}

void clearAxResponse(void)
{
	char i=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
	buffr[i++]=0;
}

void interrupt tx1_int(void) @ U1TX_VCTR
{
	int p;
	idax++;
	if(idax>=size)
	{
		U1TXIE = 0;
		axRecMode();
		return;
	}	
	//for(p=0;p<50;p++);
	U1TXREG = trame[idax];
	U1TXIF = 0;
}

void interrupt rx1_int(void) @ U1RX_VCTR
{
	unsigned char rec;
	while(U1STAbits.URXDA==1)
	{
		if(U1STAbits.FERR==1)
		{
			rec=U1RXREG;
			U1RXIF = 0;
			return;
		}
		if(U1STAbits.OERR==1)
		{
			rec=U1RXREG;
			U1STAbits.OERR=0;
			U1RXIF = 0;
			return;
		}
		rec=U1RXREG;
		if(idr<30)
		{
			buffr[idr]=rec;
			idr++;
		}
	}
	U1RXIF = 0;
}