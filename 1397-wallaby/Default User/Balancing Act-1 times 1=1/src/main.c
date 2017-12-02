#include <kipr/botball.h>
//2 from the "T" top left corner.
int main()
{
    enable_servos(); //turn servo ports on
    set_servo_position(1,1057);//move servo to a set position (up)
    msleep(1000);
    
    set_servo_position(1,2057);//move servo to a set position  (down)
    msleep(1000);
    
    set_servo_position(1,708);//(up)
    msleep(1000);
    
    printf("go forward \n");
    motor(0,50);
    motor(3,50);
    msleep(1300);
    
    motor(0,0);
    motor(3,00);
    msleep(00);
    
    set_servo_position(1,2037);//move servo to a set position (down)
    msleep(1000);
    set_servo_position(1,708);//(up)
    msleep(1000);
    
    printf("go forward \n");
    motor(0,54);
    motor(3,50);
    msleep(1000);
    
    motor(0,0);
    motor(3,00);
    msleep(00);
    
    set_servo_position(1,2037);//down
    msleep(1000);
    
    set_servo_position(1,708);//(up)
    msleep(1000);
    
    printf("go forward \n");
    motor(0,-50);
    motor(3,-50);
    msleep(3000);
    
    
    
    return 0;
}
