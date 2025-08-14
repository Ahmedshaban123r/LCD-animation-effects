#include "LCD.h"





uint8_t smiley[8] = {
	0x00,
	0x0A,
	0x0A,
	0x00,
	0x11,
	0x0E,
	0x00,
	0x00
};
uint8_t nun[]={
	0b00000,
	0b00100,
	0b00000,
	0b10001,
	0b10001,
	0b10001,
	0b11111,
	0b00000
};
uint8_t alif[] = {
	0b00100,
	0b00100,
	0b00100,
	0b00100,
	0b00100,
	0b00111,
	0b00000,
0b00000};

uint8_t baa[] = {
	0b00000,
	0b00000,
	0b00001,
	0b00001,
	0b00001,
	0b11111,
	0b00100,
0b00000};
uint8_t ain[] = {
	0b00000,
	0b01110,
	0b01000,
	0b01000,
	0b01000,
	0b11111,
	0b00000,
0b00000};
uint8_t sheen[] = {
	0b10101,
	0b00000,
	0b10101,
	0b10101,
	0b10101,
	0b11111,
	0b00000,
0b00000};

uint8_t fullBlock[8] = {
	0b11111,
	0b11111,
	0b11111,
	0b10000,
	0b10000,
	0b11111,
	0b11111,
	0b00000
};


int main(void) {
	
	//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>custome arabic name "?????"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
	/* LCD_init();
	 _delay_ms(10);
	LCD_create_char(0, smiley); // Store smiley at CGRAM slot 0
	LCD_create_char(1, nun);
	LCD_create_char(2, alif);
	LCD_create_char(3, baa);
	LCD_create_char(4, ain);
	LCD_create_char(5, sheen);
	 LCD_command(0x01); // Clear
	 _delay_ms(1060);

	 LCD_display_string("Hello ");
	 LCD_data(0); 
	 _delay_ms(10);
	 
LCD_data(1);
_delay_ms(10);
LCD_data(2);
_delay_ms(10);
LCD_data(3);
_delay_ms(10);
LCD_data(4);
_delay_ms(10);
LCD_data(5);
_delay_ms(10);
	 while (1) {}*/


//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Wave Animation<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
/*Make characters move up/down across the two lines in a “wave” motion.
	/*LCD_init();
	wave_animation("Thisissocool");*/


	LCD_init();
	LCD_create_char(0, sheen); // Custom block at position 0
	
	_delay_ms(10);
	LCD_command(0x01); // Clear
	_delay_ms(10);
LCD_command(0xC0);
	_delay_ms(20);
	LCD_display_string("Loading...");
	LCD_data(0);
while (1)
{

/*	LCD_goto(0,0);
	_delay_ms(10);
	for (uint8_t i = 0; i < 16; i++) {
		LCD_data(0); // Custom full block
		_delay_ms(1000);
	}*/
}


}



				 
 
