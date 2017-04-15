#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(3,50);
    motor(0,50);
    msleep(5000);
    
    
    enable_servos();
    set_servo_position(1,798);
    msleep(2000);
   
    printf("spining\n");
    motor(3,20);
    motor(0,75);
   ; msleep(9500);
    
    
    printf("going straight\n")
   ; motor(3,50);
    motor(0,50);
    msleep(4000);
    
    
    printf("spining\n")
   ; motor(3,75);
    motor(0,20);
    msleep(6000);
    
   printf("going straight\n");
   ; motor(3,50);
    motor(0,50);
    msleep(2000);
    
    return 0;
}
