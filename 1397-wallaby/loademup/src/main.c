#include <kipr/botball.h>

int main()
{
    
    printf("go straight\n");
    enable_servos();
    set_servo_position(1,1704);
    
    
    motor(0,50);
    motor(3,50);
    msleep(2100);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(900);
    
    printf("turn\n");
    motor(3,-10);
    motor(0,60);
    msleep(700);
    
    
    motor(0,30);
    motor(3,30);
    msleep(1000);
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    
    motor(0,-10);
    motor(3,60);
    msleep(600);
    
    set_servo_position(1,1375);
    
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    set_servo_position(2,800);
    
     ao();
    
    
    printf("Hello World\n");
    return 0;
}
