#include <kipr/botball.h>

int main()
{
    
    enable_servos();
    set_servo_position(1,1458);
    
    
    motor(0,50);
    motor(3,50);
    msleep(997);
    
    set_servo_position(1,1740);
    msleep(100);
    set_servo_position(1,1458);
    msleep(100);
    
    
    motor(0,-40);
    motor(3,10);
    msleep(1500); 
   
    
    
    ao();
    return 0;
}
