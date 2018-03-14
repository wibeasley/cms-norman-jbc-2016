#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1169);
    msleep(800);
    set_servo_position(2,1154);
    msleep(800);
    
    motor(0,0);
    motor(3,0);
    msleep(800);
    
    printf("Hello World\n");
    motor(0,53);
    motor(3,50);
    msleep(2500);
    
    motor(0,0);
    motor(3,0);
    msleep(800);
    printf("Hello World\n");
    set_servo_position(2,817);
    msleep(500);
    set_servo_position(1,857);
    msleep(500);
    
    printf("Hello World\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2300);
    
    printf("Hello World\n");
    motor(0,0);
    motor(3,0);
    msleep(800);
    
    printf("Hello World\n");
    set_servo_position(1,1137);
    msleep(500);
    set_servo_position(2,1267);
    msleep(500);
    
    printf("Hello World\n");
    motor(0,-51);
    motor(3,-50);
    msleep(900);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,00);
    msleep(800);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
    printf("Hello World\n");
    motor(3,50);
    motor(0,00);
    msleep(700);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(5500);
    
    
    return 0;
}
