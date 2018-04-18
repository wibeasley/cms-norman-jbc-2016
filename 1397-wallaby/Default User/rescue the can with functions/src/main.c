#include <kipr/botball.h>

int move(int speed_right, int speed_left, int duration){
    
    motor(0,speed_right);
    motor(3,speed_left);
    msleep(duration);
    return 0;
}

int put_can_down(){
    
    enable_servos();
    set_servo_position(1,813);
    set_servo_position(2,913);
    set_servo_position(2,1290);
    
    return 0;
}
int main(){

    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1069);
    set_servo_position(2,1290);
    move(50, 50, 4000);
    set_servo_position(1,813);
    move(0, 50, 2500);
    
    
        
    return 0;
}
