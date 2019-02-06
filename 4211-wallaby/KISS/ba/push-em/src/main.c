#include <kipr/botball.h>

int main()
{   enable_servos();
    printf("Hello World\n");
    set_servo_position(1,1518);
    motor(0,50);
    motor(3,50);
    msleep(7900);
    printf("r");
    motor(0,18);
    motor(3,50);
    msleep(6900);
    printf("k");
    motor(0,47);
    motor(3,47);
    msleep(6300);
    return 0;
}
