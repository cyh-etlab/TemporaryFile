#include "mbed.h"

DigitalOut  led1(PA_7);
DigitalOut  led2(PA_6);
InterruptIn button(PA_5);
 
void PA5_IRQHandler() 
{
    led2 = !led2;
}
int main() 
{
	button.rise(&PA5_IRQHandler); 
	while(1)
	{
		led1 = !led1;
		wait(0.2);
	}
}
