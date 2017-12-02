#include <kipr/botball.h>

int main()
{
    enable_servos(0);
    enable_servos(1);
    set_servo_position(0,1217);
    set_servo_position(1,1706);
   
    motor(0,52);
    motor(3,50);
    msleep(4700);
    ao();
    
    set_servo_position(0,1754);
    msleep(1000);
    
    set_servo_position(0,1365);
    msleep(1000);
    
    motor(0,52);
    motor(3,50);
    msleep(1500);
    ao();
     
    set_servo_position(0,1754);
    msleep(1000);
    
    set_servo_position(0,1365);
    msleep(1000);
    
    motor(0,-52);
    motor(3,-50);
    msleep(7000);
    ao();
    
    printf("8 by 5\n");
    printf("Hello World\n");
    return 0;
}
