
sbit rs=P1^0;// configuring the register_select physical line to port0's pin0
sbit rw=P1^1;// configuring the read/write physical line to port0's pin1
sbit en=P1^2;// configuring the enable physical line to port0's pin2
int lcddata(unsigned char dat); // in this function input_data is given to the port in which register_select is high, read/write is low 
void lcdcmd(unsigned char cmd);// in this function input_command is given to the port in which register_select is low, read/write is low
void lcd_string_in(unsigned char *p);// function used to pass string as input
void lcd_character_in(unsigned char val);// function used to pass string as input
void clear();// function used to clear the lcd screen
void lcd_init();// function used to initialize the lcd screen
void lcd_mid_char_in_fir_ln(unsigned char val);// function used to write a character in middle of the first line lcd screen//fir=first//ln=line//mid=middle
void lcd_mid_char_in_sec_ln(unsigned char val);// function used to write a character in middle of the second line lcd screen//sec=second//ln=line//mid=middle
void mov_cursor_to_fir_ln();//function used to move the cursor to the second line//fir=first//ln=line//mov=move
void mov_cursor_to_sec_ln();//function used to move the cursor to the second line//sec=second//ln=line//mov=move
void delay(unsigned int delay);// function used to provide delay input
