#include <kipr/botball.h>
//parallel to the left line
int main()
{
    enable_servos(); //turn servo ports on
    set_servo_position(1,708);//(up)
    msleep(1000);
    
    printf("Hello World\n");
    motor(0,50);
    motor(3,53);
    msleep(5000);
    
    motor(3,35);
    motor(0,00);
    msleep(3700);
    
    motor(0,50);
    motor(3,53);
    msleep(3000);
    
    
    motor(3,50);
    motor(0,00);
    msleep(3600);
    
    motor(0,50);
    motor(3,59);
    msleep(9000);
    
    return 0;
}
