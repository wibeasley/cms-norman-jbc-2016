#include <kipr/botball.h>

int main()
{
    
    enable_servos();
    set_servo_position(2,1457);
    set_servo_position(1,1803);
    
    
    
    motor(0,50);
    motor(3,50);
    msleep(6000);
    
    enable_servos();
    set_servo_position(2,1457);
    set_servo_position(1,1803);
    
    
    
    ao();
    msleep(200);
    
    
    set_servo_position(2,703);
    
    motor(0,-50);
    motor(3,-50);
    msleep(6000);
    
    set_servo_position(1,1359);
    
    
    motor(3,30);
    msleep(890);
    
    motor(0,30);
    motor(3,30);
    msleep(700);
    
    set_servo_position(1,1537);
    msleep(200);
    set_servo_position(1,1729);
    msleep(200);
    set_servo_position(2,1432);
    
    
    
    
    ao();
    return 0;
}
