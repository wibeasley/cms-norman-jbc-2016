#include <kipr/botball.h>

int main()
{
    printf("Moves motors forwards\n");
    motor(0,55);
    motor(3,50);
    msleep(3000);
    
    printf("turns 360 degree clockwise\n");
    motor(0,-55);
    motor(3,50);
    msleep(3500);
    ao();
    
    printf("moves servos up and down\n");
    enable_servos(0);
    set_servo_position(0,766);
    msleep(5000);
    set_servo_position(0,1613);
    msleep(1000);
    disable_servos(0);
    ao();
    
    printf("moves motors backwards\n");
    motor(0,-55);
    motor(3,50);
    msleep(2000);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
