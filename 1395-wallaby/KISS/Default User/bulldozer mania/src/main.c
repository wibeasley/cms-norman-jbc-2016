#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
//postion: 5 to the left 9 up;    
    
   
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
        
    printf("turn\n");
    motor(3,50);
    motor(0,00);
    msleep(1000);
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(1000);
        
    printf("turn\n");
    motor(0,50);
    motor(3,00);
    msleep(1000);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
   printf("turn\n");
    motor(3,00);
    motor(0,50);
    msleep(2500);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,00);
    msleep(100);
    
    enable_servos(0);
    set_servo_position(0,929);
    msleep(9000);
    ;disable_servos(0);
    
    motor (0,50);
    motor(3,50);
    msleep(9000);
    
    
    
    
    
    
    return 0;
}
