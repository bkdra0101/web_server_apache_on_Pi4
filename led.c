#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

//Program receive 2 param
// param 1 is led number
//param 2 is 1,0 value for led
// ./led 1 0

int main( int argc, char ** argv)
{
	
	wiringPiSetup();
	pinMode(25,OUTPUT);
	int led_num = atoi(argv[1]);
	int value = atoi(argv[2]);
	switch(led_num)
	{
		case 1:
			if (value ==1)
			{
				digitalWrite(25,LOW);
			}
			else
			{
			
				digitalWrite(25,HIGH);
			}
		break;
		default:
		break;
	}
	return 0 ;
}
