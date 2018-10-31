#include <kipr/botball.h>
// three from t
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
    
    printf("Hello World\n");
    move(54, 50, 5100);
    move(0, 0, 9000);
    
    move(55, 50, 7500);
    move(50, 0, 930);
    move(50, 50, 1000);
    
    return 0;
}
