#include <kipr/botball.h>

int main()
{
    
 motor(3,50); //turn on motor 0 at 95%
 motor(0,51); //turn on motor 3 at 95%
 msleep(3000); //wait time in milliseconds
 
    motor(3,50);
    motor(0,50);
    msleep(3055);
 
 motor(0,-50); //turn on motor 0 in reverse at 100%
 motor(3,-50); //turn on motor 3 in reverse at 100%
  msleep(9045);//wait time in milliseconds
  ao();//turn off all motors
    return 0;
} 
  