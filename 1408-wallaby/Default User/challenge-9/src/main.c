#include <kipr/botball.h>

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1075);
    set_servo_position(1,1995);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1200);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1200);
    ao();
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1500);
    ao();
    
    printf("turn left\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1600);
    ao();
    
     set_servo_position(1,1634);
    
    printf("turn left\n");
    motor(0,50);
    msleep(2000);
    ao(); 
    
    set_servo_position(1,1995);
    
    set_servo_position(1,1634);
   
    set_servo_position(1,1995);
    
    printf("turn left\n");
    motor(0,50);
    msleep(300);
    ao();
    
     printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1700);
    ao();
    
     set_servo_position(1,1995);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(600);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(600);
    ao();
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
   printf("go backwards\n"); 
    motor(0,-50);
    motor(3,-50);
    msleep(500);
    ao();
    
    printf("turn right\n");
    motor(3,50);
    msleep(700);
    ao();
    
    printf("turn left\n");
    motor(0,50);
    msleep(700);
    ao();
    
    motor(0,-50);
    motor(3,-50);
    msleep(7500);
    ao();
    printf("Hello World\n");
    return 0;
}
