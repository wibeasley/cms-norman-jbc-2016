#include <kipr/botball.h>
//as right to the mat  as you can put it 
int move(int speed_left, int speed_right, int duration){

    motor(3, speed_left);
    motor(0, speed_right);
    msleep( duration); 
    return 0;   
}

int main()
{
    enable_servos();
    set_servo_position(1,175);
    printf("Hello World\n");
    
    move(50, 50, 7000);
    move(0, 50, 2000);
    move(50, 50, 1500);
    move(0, 50, 1500);
    move(50, 50, 7100);
    
    
    
    
    
    
    
    
    
    return 0;
}
