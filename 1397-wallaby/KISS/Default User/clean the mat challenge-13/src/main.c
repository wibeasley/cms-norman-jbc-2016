#include <kipr/botball.h>
//parallel to the left line
int main()
{
    enable_servos(); //turn servo ports on
    set_servo_position(1,708);//(up)
    msleep(1000);
    
    printf("Hello World\n");
    motor(0,53);
    motor(3,50);
    msleep(4000);
    
    motor(0,53);
    motor(3,50);
    msleep(3800);
    
    motor(0,35);
    msleep(2900);
    
    motor(0,53);
    motor(3,50);
    msleep(3900);
    
    motor(0,35);
    msleep(2900);
    
    motor(0,53);
    motor(3,50);
    msleep(5000);
    
    motor(0,53);
    motor(3,50);
    msleep(4000);
    
    return 0;
}
