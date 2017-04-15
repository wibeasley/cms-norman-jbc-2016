#include <kipr/botball.h>

int main()
{

    enable_servos();
    set_servo_position(1,1458);
    set_servo_position(2,853);

    motor(0,50);
    motor(3,50);
    msleep(997);

    set_servo_position(1,1745);
    msleep(800);
    set_servo_position(1,1458);
    msleep(800);


    motor(0,-40);
    motor(3,10);
    msleep(1500);
    
    motor(0,20);
    msleep(550);
    

    ao();
    set_servo_position(2,1384);
    msleep(800);
    set_servo_position(1,1749);
    msleep(800);
    set_servo_position(1,1458);
    msleep(800);
    
    motor(0,20);
    motor(3,20);
    msleep(300);
    
    set_servo_position(1,1749);
    msleep(800);
    

    motor(0,50);
    motor(3,-15);
    msleep(670);
    
    motor(0,20);
    motor(3,20);
    msleep(800);    
    
    motor(0,30);
    msleep(760);    
    
    motor(0,10);
    msleep(600);
    
    

    ao();
    return 0;
}
