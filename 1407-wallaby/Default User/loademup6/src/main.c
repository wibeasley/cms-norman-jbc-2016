#include <kipr/botball.h>

int main()
{
     printf("servos get reedy.\n");
     enable_servos();   
    set_servo_position(0,1893);
    set_servo_position(3,770);  
    
    
    
    printf("moves motors1\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    printf("moves motors back1\n");   
    motor(0,-50);
    motor(3,-50);
    msleep(3000);
    
    printf("turns motors\n");
    motor(0,30);
    motor(3,10);
    msleep(2000);
    
    printf("moves motors2/n");
    motor(0,50);
    motor(3,50);
    msleep(1111);
    
    printf("turns motors2/n");
    motor(0,25);
    motor(3,50);
    msleep(1000);
    
    printf("moves motors2/n");
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    printf("turns motors3/n");
    motor(3,50);
    motor(0,30);
    msleep(2500);
    
    printf("moves motors3/n");
    motor(0,50);
    motor(3,50);
    msleep(2600);
    
    printf("moves motors back2/n");
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    
    
    
    
    
   return 0;}
