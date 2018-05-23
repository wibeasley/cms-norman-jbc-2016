#include <kipr/botball.h>
// we finished!
int main()
{
    printf("turn servos on\n");
    enable_servos();
    
    printf("move servo to position\n");
    set_servo_position(1,1841); 
    msleep(500);
    
    printf("move servo to position\n");
    set_servo_position(2,728); 
    msleep(500);
    
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
