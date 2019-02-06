#include <kipr/botball.h>

int main()
{
    printf("go strait\n");
    motor(0,63);
    motor(3,60);
    msleep(4000);
    
    enable_servos ();
    set_servo_position(0,1802);
    msleep(500);
    set_servo_position(0,802);
    msleep(500);
    disable_servos ();
    
    printf("go strait/n"); 
    motor(0,60);
    motor(3,60);
    msleep(500);
    
     enable_servos ();
    set_servo_position(0,1802);
    msleep(500);
 
    
    return 0;
}
