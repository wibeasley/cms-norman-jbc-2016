#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1829);
    set_servo_position(3,413);
    msleep(4000);
    
    
    printf("going straight\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
    
    
    
    
    
    
    return 0;
}
