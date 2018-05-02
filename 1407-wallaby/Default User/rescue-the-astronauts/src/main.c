#include <kipr/botball.h>
int move( int speed_left, int speed_right, int duration ) {
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration); 
    return 0;
}

int main()
{
    move(50,50,1000);//forward      
    move(20,60,700);
    ao();
    
    enable_servos(0,3);
    set_servo_position(3,1544);
    set_servo_position(0,181);
    msleep(3000);
    set_servo_position(3,0);
    msleep(3000);
    disable_servos(0,3);
    ao();
    
    move(50,30,500);
    move(52,50,1000);
    enable_servos(0,3);
    ao();
    
    set_servo_position(0,603);
    set_servo_position(3,1000);
    msleep(2000);
    disable_servos(0,3);
        
        
    
    
    
    return 0;
    
}  