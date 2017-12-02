#include <kipr/botball.h>
// 3 from t  
int main()
{

    enable_servos();
    set_servo_position(1,1458);
    set_servo_position(2,853);

    motor(0,50);
    motor(3,50);
    msleep(957);

    set_servo_position(1,2060);
    msleep(800);
    set_servo_position(1,1458);
    msleep(100);


    
       
    
    set_servo_position(1,2060);
    msleep(400);
    set_servo_position(1,1458);
    msleep(800);
    
    motor(3,50);
    motor(0,-15);
    msleep(1100);
    
    
    
    motor(3,-50);
    motor(0,-50);
    msleep(600);
    
    ao();
    set_servo_position(1,2060);
    msleep(800);
    set_servo_position(1,1456);
    msleep(800);
    
    
    
    motor(0,-20);
    motor(3,40);
    msleep(900);
    
    
    motor(0,50);
    motor(3,50);
    msleep(800);
    
    
    
    
    

    ao();
    return 0;
}
