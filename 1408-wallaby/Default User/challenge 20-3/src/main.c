#include <kipr/botball.h>

int main()
{
     enable_servos(0);
    enable_servos(1);
    set_servo_position(0,690);
    set_servo_position(1,1622);
    
    printf("go forward\n");
    motor(0,52);
    motor(3,50);
    msleep(5700);
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
    msleep(2500);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(700);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,839);
    msleep(2000);
    
    printf("turn right\n");
    motor(3,50);
    motor(0,52);
    msleep(1000);
    ao();
    
    printf("go forward\n");
    motor(0,52);
    motor(3,50);
    msleep(950);
    ao();

    printf("set servos\n");
    set_servo_position(0,1143);
    msleep(2000);
    
    printf("turn left\n");
    motor(3,50);
    msleep(1000);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(400);
    ao();
    
    printf("set servos\n");
    set_servo_position(0,1155);
    msleep(2000);
    
    printf("set servos\n");
    set_servo_position(1,1500);
    msleep(2000);
    
    printf("set servos\n");
    set_servo_position(0,688);
    msleep(2000);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(830);
    ao();
         
    printf("set servos\n");
    set_servo_position(0,1412);   
    msleep(2000);
    set_servo_position(1,992);
    msleep(2000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    ao();
    
    motor(3,50);
    msleep(1000);
    ao();
    
    printf("8 by 3\n");
    printf("Hello World\n");
    return 0;
}
