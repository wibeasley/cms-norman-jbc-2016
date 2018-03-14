#include <kipr/botball.h>

int main()
{
     printf("set servos\n");
    enable_servos();
    set_servo_position(0,593);
    set_servo_position(1,797);
    msleep(200);
    
    printf("moving forward\n");
    while (analog(0)>=1000) {
       
        motor(0,100);
        motor(3,100);
        msleep(100);
    }  
    
    printf("Hello World\n");
    return 0;
}
