#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ){
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    
    return 0;
}

int main()
{
    printf("Hello World\n");
    printf("set servo positions\n");
    enable_servos(0,3);
    set_servo_position(0,1494);
    set_servo_position(3,513);
    msleep(3000);
    
    
    
    
    
    
    return 0;
}
