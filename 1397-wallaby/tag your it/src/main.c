#include <kipr/botball.h>

int main()
{
 motor(0,95); //turn on motor 0 at 95%
 motor(3,95); //turn on motor 3 at 95%
 msleep(3059); //wait time in milliseconds
 motor(0,-100); //turn on motor 0 in reverse at 100%
 motor(3,-100); //turn on motor 3 in reverse at 100%
  msleep(3045);//wait tim in milliseconds
  ao();//turn off all motors
    return 0;
} 
 