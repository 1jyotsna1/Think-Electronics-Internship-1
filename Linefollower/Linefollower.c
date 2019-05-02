#include<reg51.h>
sbit IR_left=P1^0;
sbit IR_right=P1^1;
sbit L_motor=P3^0;
sbit R_motor=P3^1;
void main()
{
 L_motor=0;
 R_motor=0;
 //IR_left=0;
 //IR_right=0;
 while(1)
 {
 	if(IR_left == 1 && IR_right == 0)
	{
		L_motor=1;
		R_motor=0;
	}
	else if(IR_right == 1 && IR_left == 0)
	{
		L_motor=0;
		R_motor=1;
	}
	else 
	{
		L_motor=1;
		R_motor=1;	
		}
 }
}