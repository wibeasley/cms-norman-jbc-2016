#include <kipr/botball.h>

int main()
{
    enable_servos();
    
    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(400);
    
    set_servo_position(2,894);
    return 0;
}
