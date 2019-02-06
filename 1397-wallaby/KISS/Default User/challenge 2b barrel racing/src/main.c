#include <kipr/botball.h>

int main()
{  
   enable_servos();
   set_servo_position(1,1000);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,53);
    msleep(4000);
    
    motor(0,55);
    motor(3,54);
    msleep(4900);
    
    motor(0,00);
    motor(3,50);
    msleep(2500);
    
    motor(0,50);
    motor(3,50);
    msleep(4000);
    
    motor(0,00);
    motor(3,50);
    msleep(2300);
    
    motor(0,50);
    motor(3,50);
    msleep(4000);
    
    motor(0,00);
    motor(3,50);
    msleep(2400);
    
    motor(0,50);
    motor(3,55);
    msleep(4000);
    
    motor(0,55);
    motor(3,50);
    msleep(6000);
    return 0;
}
