#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1024);
    set_servo_position(2,736);
    while (analog(5)<=2925){
        motor(0,50);
        motor(3,50);
        msleep(100);
    }
    
    set_servo_position(2,1570);
    msleep(100);
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    motor(0,0);
    motor(3,0);
    msleep(200);
    
    set_servo_position(2,736);
    msleep(100);
    
    motor(0,-50);
    motor(3,-50);
    msleep(11010);
    
    return 0;
}
