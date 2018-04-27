#include <kipr/botball.h>
//AR top angle towrd can 2
int move(int speed_right, int speed_left, int duration){
    
    motor(0,speed_right);
    motor(3,speed_left);
    msleep(duration);
    return 0;
}

int put_can_down(int first, int second, int last){
    
    enable_servos();
    set_servo_position(1,first);//813
    set_servo_position(2,second);//813
    set_servo_position(2,last);//1290
    
    return 0;
}
int main(){

    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1150);
    set_servo_position(2,1330);
    move(50, 50, 4000);
    move(50, 50, 4000);
    
    set_servo_position(2,800);
    msleep(100);
    ao();
    msleep(100);
    set_servo_position(1,713);
    msleep(100);
    ao();
    msleep(100);
    move(0, 50, 3500);
    move(50,50,1600);
    move(50,50,1600);
    move(0, 50, 1600);
    move(50,50,1600);
    move(50,50,1600);
    printf("put can down\n");
    put_can_down(813, 813, 1290);
        
    
        
    return 0;
}
