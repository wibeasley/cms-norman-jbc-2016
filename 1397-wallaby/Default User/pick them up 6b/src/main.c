#include <kipr/botball.h>
// 4 from the "T", 2 down top left corner, angle left 
int main()
{
    enable_servos();
    
    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(400);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(2,834);
    msleep(800);
    set_servo_position(1,700);
    msleep(800);
    
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
    motor(0,-52);
    motor(3,-50);
    msleep(1700);
    
    motor(0,20);
    motor(3,00);
    msleep(1300);
    
    motor(0,55);
    motor(3,50);
    msleep(2700);
    
    motor(3,23);
    motor(0,-20);
    msleep(600);
    
    printf("go forward\n");
    motor(0,61);
    motor(3,50);
    msleep(2090);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(2,830);
    msleep(800);
    
    set_servo_position(1,700);
    msleep(800);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1300);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
    return 0;
}
  
    