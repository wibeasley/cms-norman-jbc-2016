#include <kipr/botball.h>

int main()
{   
    enable_servos(0);
    set_servo_position(0,450);  
    msleep(3000);
    enable_servos(0);
    set_servo_position(0,47);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,20);
    msleep(1000);
    
    printf("turn right\n");
    motor(3,50);
    motor(0,20);
    msleep(1000);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,20);
    msleep(1000);
    
   printf("turn right\n");
    motor(3,50);
    motor(0,20);
    msleep(1000); 
    
    
    printf("turn left\n");
    motor(0,50);
    motor(3,20);
    msleep(1000);
    
    printf("turn right\n");
    motor(3,50);
    motor(0,20);
    msleep(1000);
    
    
    printf("turn left\n");
    motor(0,50);
    motor(3,20);
    msleep(1000);
    
    
    printf("turn right\n");
    motor(3,50);
    motor(0,20);
    msleep(1000);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,20);
    msleep(1000);
    
    printf("turn right\n");
    motor(3,50);
    motor(0,20);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    
   motor(0,50);
    motor(3,50);
    msleep(1000); 
    
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    
   motor(0,-50);
    motor(3,-50);
    msleep(1000); 
  
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
  
    motor(0,50);
    motor(3,00);
    msleep(4000);
    
    motor(3,50);
    motor(0,00);
    msleep(4000);
    
    
set_servo_position(0,890);
msleep(3000);    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
