#include <kipr/botball.h>

int main()
{
    enable_servos();
    set_servo_position(1,1706);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(6000);
 
    
    return 0;
}