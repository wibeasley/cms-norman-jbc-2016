#include <kipr/botball.h>

int main()
{
    
    printf("go straight\n");
    enable_servos();
    set_servo_position(1,2060);
    set_servo_position(2,1798);
    
    motor(0,40);
    motor(3,40);
    msleep(2800);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(900);
    
    printf("turn\n");
    motor(3,-10);
    motor(0,60);
    msleep(600);
    
    
    motor(0,30);
    motor(3,30);
    msleep(1000);
    
    motor(0,50);
    motor(3,50);
    msleep(1600);
    
    
    motor(0,-10);
    motor(3,60);
    msleep(600);
    
    set_servo_position(1,1465);
    
    
    
    motor(0,50);
    motor(3,50);
    msleep(2500);
    
    motor(0,00);
    motor(5,00);
    msleep(100);
    
    set_servo_position(2,800);
    
    
    motor(0,00);
    motor(3,00);
    msleep(500);
    
    
    motor(0,-48);
    motor(3,-48);
    msleep(1400);
    
    motor(0,00);
    motor(3,00);
    msleep(250);
    
    
    set_servo_position(2,1466);
    msleep(1000);
    
    
    motor(0,-30);
    motor(3,-30);
    msleep(900);
    
    motor(0,-10);
    motor(3,60);
    msleep(400);
    
    set_servo_position(1,2060);
    
    
    
    motor(0,50);
    motor(3,50);
    msleep(2500);
    
    
     ao();
    
    
    printf("Hello World\n");
    return 0;
}
