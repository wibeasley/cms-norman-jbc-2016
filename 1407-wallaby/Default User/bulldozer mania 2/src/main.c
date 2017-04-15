#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
     printf("servos get reedy.\n");
     enable_servos();   
    set_servo_position(0,1851);
    set_servo_position(3,382);  
    
    printf("turns motors 1/n");
    motor(0,70);    
    motor(3,70);    
    msleep(1000);
    
    printf("moves motors 1/n");
    motor(0,50);    
    motor(3,50);
    msleep(3000);
    
    printf("turns motors 2/n");
    motor(0,00);
    
    
    
    
    
    
    
    
    
    

    
    return 0;
}
