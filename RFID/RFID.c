#include<reg51.h>
void check();
  unsigned char sap1[11]={"60001150008"};
	unsigned char stu1[]={"Manan Doshi"};
	unsigned char sap2[11]={"60001150010"};
	unsigned char stu2[]={"Rajat Doshi"};
	unsigned char sap3[11]={"60001150049"};
	unsigned char stu3[]={"Monica Shah"};
	unsigned char a[11];
	unsigned char x;
	void main()
{
	SCON=0x50;
	TMOD=0x30;
	TH1=-3;
	TR1=1;
	while(1)
	{
		for(x=0;x<10;x++)
		{
			while(RI==0)
				a[x]=SBUF;
			SBUF=a[x];
			while(TI==0)
				RI==0;
			TI==0;
		}
		check();
	} }

	void check()
	{
		if(a[0]=='6' & a[1]=='0' & a[2]=='0' & a[3]=='0' & a[4]=='1' & a[5]=='1' & a[6]=='5' & a[7]=='0' & a[8]=='0' & a[9]=='0' & a[10]=='8')
		{
			for(x=0;x<10;x++)
			{
				SBUF=stu1[x];
				while(TI==0)
					TI=0;
			} }
		
	if(a[0]=='6' & a[1]=='0' & a[2]=='0' & a[3]=='0' & a[4]=='1' & a[5]=='1' & a[6]=='5' & a[7]=='0' & a[8]=='0' & a[9]=='1' & a[10]=='0')
		{
			for(x=0;x<10;x++)
			{
				SBUF=stu2[x];
				while(TI==0)
					TI=0;
			} 	}
		
			if(a[0]=='6' & a[1]=='0' & a[2]=='0' & a[3]=='0' & a[4]=='1' & a[5]=='1' & a[6]=='5' & a[7]=='0' & a[8]=='0' & a[9]=='4' & a[10]=='9')
		{
			for(x=0;x<10;x++)
			{
				SBUF=stu3[x];
				while(TI==0)
					TI=0;
			} }
		}
	
	