#include <kipr/botball.h>

int main()
{   
    enable_servos(1);
    enable_servos(2);
    set_servo_position(0,1330);
    set_servo_position(1,797);
    msleep(200);
    
    printf("go foward\n");
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
    printf("turn left\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("Hello World\n");
    printf("Hello World\n");
    return 0;
}
