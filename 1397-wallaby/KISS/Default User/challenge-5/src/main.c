#include <kipr/botball.h>

int main()
{
     enable_servos();
    enable_servos();
    set_servo_position(1,572);
    set_servo_position(2,717);
    
    motor(0,50);
    motor(3,55);
    msleep(3500);
    ao();
    
    motor(0,50);
    msleep(7500);
    ao();
    
    motor(3,55);
    msleep(7500);
    ao();
    
    set_servo_position(2,957);
    msleep(1000);
    
    set_servo_position(1,1403);
    msleep(1000);
   
    set_servo_position(1,572);
    msleep(1000); 
    
    motor(0,-50);
    motor(3,-55);
    msleep(4000);
    ao();
    
    set_servo_position(1,1403);
    msleep(1000);


    
    
    printf("6-2\n");
 
    printf("Hello World\n");
    return 0;
}
