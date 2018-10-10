#include <kipr/botball.h>
//on the S y'all
int main()
{
    enable_servos();
    set_servo_position(1,222);
    
    printf("Go straight forward.\n");
    motor(0,50);
    motor(3,50);
    msleep(3800);
  
    printf("Turn right.\n");
    motor(0,25);
    msleep(2800);
    printf("go straight.\n");
    motor(3,70);
    motor(0,70);
    msleep(1500);
    
    printf("turn left.\n");
    motor(3,35);
    msleep(1900);
    
    printf("go straight.\n");
    motor(3,50);
    motor(0,50);
   msleep(500);
    
    printf("turn left.\n");
    motor(0,50);
    msleep(500);
    
    printf("right angle turn.\n");
    motor(0,90);
    motor(3,-15);
    msleep(1000);
    
    printf("go straight.\n");
    motor(3,50);
    motor(0,50);
    msleep(3000);
    
    printf("turn right.\n");
    motor(0,90);
    motor(3,-15);
    msleep(1500);
    
    printf("go straight.\n");
    motor(0,50);
    motor(3,50);
    msleep(7000);
    
    printf("turn.\n");
    motor(3,58);
    motor(0,30);
    msleep(2500);
    
    printf("go straight.\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    
    ao();
    return 0;
}
