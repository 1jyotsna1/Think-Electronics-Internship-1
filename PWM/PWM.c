#include<regx52.h>
void PWM(unsigned char);
	void main()
	{
		P2=0x00;
		while(1)
		{
			unsigned char m;
			unsigned char n;
			m=100;
			n=100-m;
			P2=0x01;
			PWM(m);
			P2=0x00;
			PWM(n);
		}
	}
	void PWM(unsigned char time)
	{
		unsigned int i;
		for(i=0;i<time;i++)
		{
			TMOD=0x01;
			TH0=0xFC;
			TL0=0x67;
			TR0=0x01;
			while(TF0==0x00)
				TR0=0x00;
			TF0=0x00;
		}
	}
	
			