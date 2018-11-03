#include <kipr/botball.h>
// 3 from the left of the T in start
int main()
{
    enable_servos();
    set_servo_position(1,800);
    msleep(800);
    
    set_servo_position(2,580);
    msleep(800);
    
    motor(0,50);
    motor(3,55);
    msleep(5500);
    
    motor(0,0);
    motor(3,0);
    msleep(400);
    
    set_servo_position(1,1470);
    msleep(800);
    
    set_servo_position(1,800);
    msleep(800);
    
    motor(0,50);
    motor(3,55);
    msleep(1300);
    
    set_servo_position(1,1470);
    msleep(800);
    
    set_servo_position(1,800);
    msleep(800);
    
    motor(0,-50);
    motor(3,-55);
    msleep(9500);
          
    return(0);
}