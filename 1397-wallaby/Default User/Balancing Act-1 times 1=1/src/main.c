#include <kipr/botball.h>
//2 from the left 
int main()
{
    enable_servos(); //turn servo ports on
    set_servo_position(1,1057);//move servo to a set position
    msleep(1000);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(700);
    
    motor(0,0);
    motor(3,00);
    msleep(00);
    
    set_servo_position(1,2037);//move servo to a set position
    msleep(1000);
    set_servo_position(1,708);
    msleep(1000);
    set_servo_position(1,2037);
    msleep(1000);
    set_servo_position(1,708);
    msleep(1000);
    set_servo_position(1,2037);
    msleep(1000);
    set_servo_position(1,708);
    msleep(1000);
    set_servo_position(1,2037);
    msleep(1000);
    
    
    
    return 0;
}
