#include <kipr/botball.h>

int main()
{
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,839);
    
    printf("go forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1498);
    
    printf("go forwad\n");
    motor(0,50);
    motor(3,50);
    msleep(2300);
    ao();
    
    motor(0,-50);
    motor(3,-50);
    msleep(2300);
    ao();
    
   printf("go forwad\n");
    motor(0,50);
    motor(3,50);
    msleep(2300);
    ao(); 
    
     printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,839);
    
     motor(0,50);
    msleep(2100);
    ao();
 
     motor(0,-50);
    motor(3,-50);
    msleep(2300);
    ao();
    
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1500);
    
    printf("go forwad\n");
    motor(0,50);
    motor(3,50);
    msleep(2300);
    ao();
    
    printf("set servos\n");
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,839);
    
    motor(3,50);
    msleep(2300);
    ao();
    
    
    printf("Hello World\n");
    return 0;
}
