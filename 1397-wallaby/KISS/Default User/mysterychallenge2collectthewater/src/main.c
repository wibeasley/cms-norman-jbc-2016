#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    enable_servos();
    set_servo_position(1,1048);
    set_servo_position(2,787);
    
    motor(0,50);
    motor(3,55);
    msleep(350);
    
    set_servo_position(1,611);
    set_servo_position(2,787);
    
    motor(0,50);
    motor(3,10);
    msleep(1300);
    
    set_servo_position(1,611);
    set_servo_position(2,1000);
    set_servo_position(2,1365);
    
    motor(0,50);
    motor(3,55);
    msleep(500);
    
    return 0;
}
