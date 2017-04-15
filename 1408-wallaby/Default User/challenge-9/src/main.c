#include <kipr/botball.h>

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1216);
    set_servo_position(1,1365);
   
    motor(0,50);
    motor(3,50);
    msleep(4700);
    ao();
    
    set_servo_position(1,2047);
    msleep(1000);
    
    set_servo_position(1,1365);
    msleep(1000);
    
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
     
    set_servo_position(1,2047);
    msleep(1000);
    
    set_servo_position(1,1365);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(6000);
    ao();
    
    
    printf("Hello World\n");
    return 0;
}
