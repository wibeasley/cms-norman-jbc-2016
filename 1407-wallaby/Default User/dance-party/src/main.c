#include <kipr/botball.h>

int main()
{
    motor(0,50);
    motor(3,50);
    msleep(3600);
    
    enable_servos(1);
    set_servo_position(1,412);
    msleep(1000);
    set_servo_position(1,1416);
    msleep(1000);
    disable_servos(1);
    
    
    motor(0,50);
    motor(3,-10);
    msleep(5500);
    
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    
    motor(3,50);
    motor(0,-10);
    msleep(5400);
    
    ao();
    return 0;
}
