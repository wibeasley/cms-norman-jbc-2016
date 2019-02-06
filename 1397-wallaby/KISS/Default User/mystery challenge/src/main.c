#include <kipr/botball.h>

int main()
{
    enable_servos();
    set_servo_position(1,1215);
    set_servo_position(2,1200);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,55);
    msleep(3000);
    
    motor(0,-50);
    motor(3,-55);
    msleep(3000);
    
    motor(0,0);
    motor(3,55);
    msleep(1400);
    
    motor(0,50);
    motor(3,55);
    msleep(750);
    
    set_servo_position(2,800);
    msleep(1000);
    
    motor(0,50);
    motor(3,00);
    msleep(1650);
    
    motor(0,50);
    motor(3,52);
    msleep(550);
    
    motor(0,0);
    motor(3,00);
    msleep(300);
    
    set_servo_position(2,1200);
    msleep(300);
    
    motor(0,-50);
    motor(3,-55);
    msleep(2700);
    
    motor(3,50);
    motor(0,00);
    msleep(1500);
    
    motor(0,50);
    motor(3,55);
    msleep(700);
    
    motor(0,0);
    motor(3,00);
    msleep(300);
    set_servo_position(2,800);
    msleep(1000);
   
    motor(0,50);
    motor(3,00);
    msleep(1500);
    
    motor(0,50);
    motor(3,55);
    msleep(1000);
    return 0;
}
