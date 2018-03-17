#include <kipr/botball.h>

int main()
{
    printf("set servos\n");
    enable_servos();
    set_servo_position(0,1391);
    set_servo_position(1,1602);
    msleep(200);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(6800);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1391);
    set_servo_position(1,952);
    msleep(200);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(1500);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("turn right\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,724);
    set_servo_position(1,952);
    msleep(200);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("2 by 4\n");
    return 0;
}
