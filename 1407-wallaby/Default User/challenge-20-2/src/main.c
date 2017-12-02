#include <kipr/botball.h>

int main()
{
     enable_servos(0);
    enable_servos(1);
    set_servo_position(0,690);
    set_servo_position(1,1622);
    
    printf("go forward\n");
    motor(0,50); 
    motor(3,50);
    msleep(6000);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1412);
    msleep(2000);
    set_servo_position(1,992);
    msleep(2000);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("go forward\n");
    motor(3,50);
    motor(0,50);
    msleep(500);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,484);
    msleep(2000);
    set_servo_position(0,1083);
    msleep(2000);
     
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1400);
    ao();
    
    printf("set servo\n");
    set_servo_position(1,1398);
    msleep(2000);
    
     printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    ao();
    
     printf("Hello World\n");
    motor(3,50);
    msleep(500);
    ao();
    
    printf("5 by E\n");
    printf("Hello World\n");
    return 0;
    
}
