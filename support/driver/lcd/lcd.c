#include "lcd.h"

#include "board.h"

#include <xc.h>

// <TODO write this functions correctly
void delay_ms(uint16_t ms)
{
	int i, j;
	for(j=0; j<ms; j++) for(i=0; i<6210; i++) asm("NOP");
}

void delay_us(uint16_t us)
{
	int i, j;
	for(j=0; j<us; j++) for(i=0; i<6; i++) asm("NOP");
}
// TODO/>

void write_command_lcd(uint16_t cmd)
{
	SCREEN_PORT_OUTPUT;
	SCREEN_RS = 0;
	SCREEN_CS = 0;
	SCREEN_PORT = cmd;
	SCREEN_RW = 0;
	SCREEN_RW = 1;
	SCREEN_CS = 1;
	SCREEN_RS = 1;
}

void write_data_lcd(uint16_t data)
{
	SCREEN_PORT_INPUT;
	SCREEN_CS = 0;
	SCREEN_PORT = data;
	SCREEN_RW = 0;
	SCREEN_RW = 1;
	SCREEN_CS = 1;
}

void write_command_data_lcd (uint8_t cmd, uint16_t data)
{
	write_command_lcd(cmd);
	write_data_lcd(data);
}

void init_lcd()
{
	SCREEN_CS = 1;
	SCREEN_RS = 1;
	SCREEN_RW = 1;
	SCREEN_RD = 1;
	SCREEN_RST = 1;
	delay_ms(5);
	SCREEN_RST = 0;
	delay_ms(5);
	SCREEN_RST = 1;
	delay_ms(5);
	
	write_command_data_lcd(0x0001, 0x003C);
	write_command_data_lcd(0x0002, 0x0100);
	write_command_data_lcd(0x0003, 0x1020);
	write_command_data_lcd(0x0008, 0x0808);
	write_command_data_lcd(0x000A, 0x0500);
	write_command_data_lcd(0x000B, 0x0000);
	write_command_data_lcd(0x000C, 0x0770);
	write_command_data_lcd(0x000D, 0x0000);
	write_command_data_lcd(0x000E, 0x0001);
	write_command_data_lcd(0x0011, 0x0406);
	write_command_data_lcd(0x0012, 0x000E);
	write_command_data_lcd(0x0013, 0x0222);
	write_command_data_lcd(0x0014, 0x0015);
	write_command_data_lcd(0x0015, 0x4277);
	write_command_data_lcd(0x0016, 0x0000);
	write_command_data_lcd(0x0030, 0x6A50);
	write_command_data_lcd(0x0031, 0x00C9);
	write_command_data_lcd(0x0032, 0xC7BE);
	write_command_data_lcd(0x0033, 0x0003);
	write_command_data_lcd(0x0036, 0x3443);
	write_command_data_lcd(0x003B, 0x0000);
	write_command_data_lcd(0x003C, 0x0000);
	write_command_data_lcd(0x002C, 0x6A50);
	write_command_data_lcd(0x002D, 0x00C9);
	write_command_data_lcd(0x002E, 0xC7BE);
	write_command_data_lcd(0x002F, 0x0003);
	write_command_data_lcd(0x0035, 0x3443);
	write_command_data_lcd(0x0039, 0x0000);
	write_command_data_lcd(0x003A, 0x0000);
	write_command_data_lcd(0x0028, 0x6A50);
	write_command_data_lcd(0x0029, 0x00C9);
	write_command_data_lcd(0x002A, 0xC7BE);
	write_command_data_lcd(0x002B, 0x0003);
	write_command_data_lcd(0x0034, 0x3443);
	write_command_data_lcd(0x0037, 0x0000);
	write_command_data_lcd(0x0038, 0x0000);
	delay_ms(20);  // delay 20 ms
	write_command_data_lcd(0x0012, 0x200E);
	delay_ms(160);  // delay 160 ms
	write_command_data_lcd(0x0012, 0x2003);
	delay_ms(40);  // delay 40 ms
	
	write_command_data_lcd(WINDOW_XADDR_END, 0x013F);
	write_command_data_lcd(WINDOW_XADDR_START, 0x0000);
	write_command_data_lcd(WINDOW_YADDR_END, 0x01DF);
	write_command_data_lcd(WINDOW_YADDR_START, 0x0000);
		
	write_command_data_lcd(GRAM_ADR_ROW_S, 0x0000);
	write_command_data_lcd(GRAM_ADR_COL_S, 0x013F);
	write_command_data_lcd(0x0007, 0x0012);
	delay_ms(40);  // delay 40 ms
	write_command_data_lcd(0x0007, 0x0017);
}

static void setPos_lcd(uint16_t x0, uint16_t x1, uint16_t y0, uint16_t y1)
{
	write_command_data_lcd(WINDOW_XADDR_START,x0);
	write_command_data_lcd(WINDOW_XADDR_END,x1);
	write_command_data_lcd(WINDOW_YADDR_START,y0);
	write_command_data_lcd(WINDOW_YADDR_END,y1);
	write_command_data_lcd(GRAM_ADR_ROW_S,y0);
	write_command_data_lcd(GRAM_ADR_COL_S,x0);
	
	write_command_lcd (0x22);
}

void fill_screen(uint16_t bColor)
{
	uint16_t i,j;
	setPos_lcd(0, 319, 0, 479);
	
	for (i=0; i<320; i++)
		for (j=0;j<480;j++) write_data_lcd(bColor);
}

void affImage(uint16_t x, uint16_t y, uint16_t w, uint16_t h, __prog__ const uint16_t *img)
{
	uint16_t i,j;
	unsigned long addr=0;
	//setPos_lcd(0+x,239+x,0+y,319+y);//320x240
	setPos_lcd(y, y+h-1, x, x+w-1);
	
	for (i=0; i<w; i++)
	{
		for (j=0; j<h; j++)
		{
			write_data_lcd(img[addr]);
			addr++;
		}
	}
}