#include <kipr/botball.h>
//b 6 squares over from the right 
int main()
{
    printf("Go straight forward.\n");
    motor(0,50);
    motor(3,50);
    msleep(2800);
  
    printf("Turn left.\n");
    motor(3,25);
    msleep(2800);
    printf("go straight.\n");
    motor(0,70);
    motor(3,70);
    msleep(770);
    
    printf("turn right.\n");
    motor(0,35);
    msleep(1900);
    
    printf("go straight.\n");
    motor(3,50);
    motor(0,50);
   msleep(500);
    
    printf("turn left.\n");
    motor(3,50);
    msleep(500);
    
    printf("right angle turn.\n");
    motor(3,90);
    motor(0,-15);
    msleep(600);
    
    printf("go straight.\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    printf("turn right.\n");
    motor(3,90);
    motor(0,-15);
    msleep(900);
    
    printf("go straight.\n");
    motor(3,50);
    motor(0,50);
    msleep(3500);
    
    printf("turn right.\n");
    motor(0,90);
    motor(3,-15);
    msleep(970);
    
    printf("go straight.\n");
    motor(0,58);
    motor(3,50);
    msleep(4400);
    
    ao();
    return 0;
}
