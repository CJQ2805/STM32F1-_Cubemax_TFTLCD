#include <delay.h>





void delay_us(u32 u32nus)
{		
	u32nus *= 8;
	do{
		__NOP();
	}while(u32nus--);
	
}
void delay_ms(u32 u32time)
{
	while(u32time--)
	{
		delay_us(1000);
	}
}
