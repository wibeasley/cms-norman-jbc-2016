#include <kipr/botball.h>
// 3 from the left of the T in start
int main()
{
    enable_servos();
    set_servo_position(2,800);
    msleep(800);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,52);
    msleep(500);
    
    motor(0,0);
    motor(3,00);
    msleep(200);
    
    set_servo_position(1,1458);
    msleep(800);
    
    set_servo_position(1,642);
    msleep(800);

    printf("go straight\n");
    motor(0,52);
    motor(3,52);
    msleep(1200);
    
    motor(0,0);
    motor(3,00);
    msleep(200);
    
    set_servo_position(1,1458);
    msleep(800);

    set_servo_position(1,642);
    msleep(800);
    
    printf("go straight\n");
    motor(0,52);
    motor(3,52);
    msleep(1200);
    
    motor(0,0);
    motor(3,00);
    msleep(200);
    
    set_servo_position(1,1458);
    msleep(800);

    set_servo_position(1,642);
    msleep(800);
    
    printf("go straight\n");
    motor(0,-50);
    motor(3,-52);
    msleep(3000);
    printf("Hello World\n");
    return 0;
}
