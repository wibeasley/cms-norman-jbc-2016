#include <kipr/botball.h>

int main()
{  
   enable_servos();
   set_servo_position(1,1000);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,56);
    msleep(11000);
    
    motor(0,00);
    motor(3,50);
    msleep(2500);
    
    motor(0,50);
    motor(3,56);
    msleep(7000);
    
    motor(0,00);
    motor(3,50);
    msleep(2500);
    
    motor(0,50);
    motor(3,56);
    msleep(13000);
   
   
    return 0;
}
