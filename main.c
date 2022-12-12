#include<REGX51.H>
#include"lcd.h"  // file name should be meaning full 
void main()
{
	lcd_init();  //initiazing lcd 
	while(1)//infinite loop
	{
		lcd_string_in("Hii I'm Bignesh");//calling lcd_string_in
		lcd_string_in("good morning");//calling lcd_string_in
		clear();//calling clear function 
		lcd_string_in("That'snot v it's");//calling lcd_string_in
		lcd_character_in('B');//calling lcd_character_in
		clear();//calling clear function
		lcd_mid_char_in_fir_ln('H');//calling lcd_mid_char_in_fir_ln function
		lcd_mid_char_in_sec_ln('B');//calling lcd_mid_char_in_sec_ln function
		clear();//calling clear function
		
	}
}