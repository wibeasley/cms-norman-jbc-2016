#include <kipr/botball.h>

int move ( int speed_left, int speed_right, int duration ){
   motor(0,speed_left);
   motor(3,speed_right); 
   msleep(duration);

    return 0;
}


int main()
{
    printf("Hello World\n");
    printf("activates claws\n");
    enable_servos(0,3);
    set_servo_position(0,1566);
    set_servo_position(3,575);
    msleep(2500);
    ao();
    
    printf("turns left\n");
    move(-50,50,2500);
    printf("closes claw\n");
    set_servo_position(3,0);
    
    
    
    return 0;
}
