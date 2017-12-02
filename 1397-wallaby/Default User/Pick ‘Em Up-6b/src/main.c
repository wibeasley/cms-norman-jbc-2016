#include <kipr/botball.h>
// 3 from the t, 2 down, left corner of sqaure
int main()
{
    enable_servos();
    set_servo_position(1,1722);
    set_servo_position(2,1281);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(400);
    set_servo_position(2,894);
    return 0;
}
