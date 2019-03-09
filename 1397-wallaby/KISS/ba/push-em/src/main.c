#include <kipr/botball.h>

int main()
{   enable_servos();
    printf("Hello World\n");
    set_servo_position(1,1490);
    motor(0,50);
    motor(3,50);
    msleep(7600);
    printf("rla");
    motor(0,50);
    motor(3,26);
    msleep(8000);
    printf("k");
    motor(0,47);
    motor(3,47);
    msleep(6300);
    return 0;
}
