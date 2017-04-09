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
    return 0;
}
