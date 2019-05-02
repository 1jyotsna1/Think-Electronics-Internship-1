#include<reg51.h>
#define LED P1
void delay(unsigned int time);
void delay(unsigned int time)
	
{
	unsigned int i,j;
	for(i=0; i<time;i++);
	for(j=0;j<1275;j++);
}
void main()
{
	while(1)
	{
		LED=0x00;
		delay(200);
		LED=0xff;
		delay(200);
	}
}

		