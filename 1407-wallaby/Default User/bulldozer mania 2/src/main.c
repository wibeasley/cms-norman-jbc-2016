#include <kipr/botball.h>

int main()
{
    
     printf("servos get ready.\n");
     enable_servos();   
    set_servo_position(0,1756);
    set_servo_position(3,63);  
    
    printf("turns motors 1/n");
    motor(0,70);    
    motor(3,00);    
    msleep(1000);
    
    printf("moves motors 1/n");
    motor(0,50);    
    motor(3,50);
    msleep(4070);
    
    printf("turns motors 2/n");
    motor(0,00);
    motor(3,50);
    msleep(1300);
    
    printf("moves motors 2/n");    
    motor(0,50);
    motor(3,50);
    msleep(10000);
    
    printf("turns motors 3\n");
    motor(0,00);
    motor(3,50);
    msleep(2500);
    
    printf("moves motor 2\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
    printf("turns motor 3\n");
    motor(0,00);
    motor(3,50);
    msleep(1000);
    
    printf("moves motors 3\n");
    motor(0,50);
    motor(3,50);
    msleep(10000);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
