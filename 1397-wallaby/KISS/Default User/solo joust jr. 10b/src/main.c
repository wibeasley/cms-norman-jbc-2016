#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor (0,50);
    motor(3,50);
    msleep(7000);
    enable_servos();
    set_servo_position(1,1053);
    
    
    
    return 0;
}
