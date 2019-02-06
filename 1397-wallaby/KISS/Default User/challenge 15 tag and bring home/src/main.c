#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");

    enable_servos();
    set_servo_position(1,1152);
    set_servo_position(2,616);

    printf("go forward\n");
    int step_count = 0;
    while (analog(5)<=2750) {
        step_count = step_count +1;
        motor(0,55);
        motor(3,50);
        msleep(100);    
    }    
    printf("step_count: %i\n ", step_count);

    motor(0,50);
    motor(3,-01);
    msleep(4000);


    printf("go backward\n");
    motor(0,50);
    motor(3,50);
    msleep(step_count * 100);
    return 0;

}
