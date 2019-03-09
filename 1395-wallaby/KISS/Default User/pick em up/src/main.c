#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    motor(0,50);
    motor(3,50);
    msleep(300);
    
    enable_servos(0,3);
    set_servo_position(3,600);
    disable_servos(0,3);
    msleep(2000);
    
     enable_servos(0,3);
    set_servo_position(0,585);
    disable_servos(3,580);
    msleep(2000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    motor(3,50);
    motor(0,30);
    msleep(7000);
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    motor(1,50);
    motor(3,50);
    msleep(500);
    
    motor(1,50);
    motor(3,00);
    msleep(1000);
    
    motor(0,50);
    motor(3,0);
    msleep(3000);
    
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    
    return 0;
    
    
  
   

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
   
    

}
