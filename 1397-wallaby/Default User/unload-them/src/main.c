#include <kipr/botball.h>
// 4 from the 'T'
int main()
{
    printf("Open Claws\n");
    enable_servos();
    set_servo_position(1,1169);
    msleep(800);
    set_servo_position(2,1654);
    msleep(800);
    
    motor(0,0);
    motor(3,0);
    msleep(800);
    
    printf("Go Forward\n");
    motor(0,50);
    motor(3,50);
    msleep(2800);
    
    motor(0,0);
    motor(3,0);
    msleep(800);
    printf("Close Claws\n");
    set_servo_position(2,817);
    msleep(500);
    set_servo_position(1,857);
    msleep(500);
    
    printf("Go Backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    
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
    msleep(2200);
    
    printf("Hello World\n");
    motor(3,50);
    motor(0,00);
    msleep(800);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(5800);
    
    printf("Go Backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    
    printf("Hello World\n");
    motor(3,50);
    motor(0,0);
    msleep(800);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(1800);
    
    printf("Close Claws\n");
    set_servo_position(2,817);
    msleep(500);
    
    printf("Go Backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1400);
    
    return 0;
}
