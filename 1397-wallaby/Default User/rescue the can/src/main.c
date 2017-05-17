#include <kipr/botball.h>

int main()
{
    
    enable_servos();
    set_servo_position(2,1457);
    set_servo_position(1,1803);
    
    
    
    motor(0,50);
    motor(3,50);
    msleep(5000);
    
    enable_servos();
    set_servo_position(2,1457);
    
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    
    
    ao();
    msleep(200);
    
    
    set_servo_position(2,703);
    
    motor(0,-50);
    motor(3,-50);
    msleep(6000);
    
    set_servo_position(1,1359);
    
    
    motor(3,30);
    msleep(890);
    
    motor(0,30);
    motor(3,30);
    msleep(300);
    
    set_servo_position(1,1537);
    msleep(200);
    set_servo_position(1,1729);
    msleep(200);
    set_servo_position(2,1111);
    
    motor(0,-40);
    motor(3,-40);
    msleep(2000);
    
    
    motor(0,55);
    motor(3,10);
    msleep(1000);
    
    motor(0,10);
    motor(3,55);
    msleep(550);
    
    set_servo_position(2,1345);
    motor(0,50);
    motor(3,50);
    msleep(1000);    
    
    
    
    
    motor(0,50);
    motor(3,50);
    msleep(150);
    ao();
    msleep(700);
    set_servo_position(2,828);
    msleep(1000);
    
    
    
    
    
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
    set_servo_position(1,1178);
    
    
    motor(3,40);
    motor(0,-20);
    msleep(995);
    
    set_servo_position(1,1537);
    msleep(200);
    set_servo_position(1,1729);
    msleep(200);
    set_servo_position(2,1111);
    
    
    
    
    
    ao();
    return 0;
}
