#include<reg51.h>
#include<stdio.h>
void delay(void);
sbit motorpin1=P2^0;
sbit motorpin2=P2^1;
void main()
{
	do
	{
		motorpin1=1;
		motorpin2=0;
		delay();
		
		motorpin1=1;
		motorpin2=1;
		delay();
		
		motorpin1=0;
		motorpin2=1;
		delay();
		
		motorpin1=0;
		motorpin2=0;
		delay();
	} while(1);
}
void delay()
{
	int i,j;
	for(i=0;i<300;i++)
	{ for(j=0;j<300;j++)
		{ }
	}
}
		
