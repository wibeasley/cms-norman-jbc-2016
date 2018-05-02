#include <kipr/botball.h>
// place the paper stack next to the black lines
//on the T
int move(int speed_right, int speed_left, int duration){
    
    motor(0,speed_right);
    motor(3,speed_left);
    msleep(duration);
    return 0;
}

int put_can_down(int first, int second, int last){
    
    enable_servos();
    set_servo_position(1,first);//813
    msleep(100);
    set_servo_position(2,second);//813
    msleep(100);
    set_servo_position(2,last);//1290
    msleep(100);
    
    return 0;
}
int main(){

    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1210);
    set_servo_position(2,1530);
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
    move(50,50,1400);
    move(50,50, 2500);
    ao();
    move(0, 0, 800);
    printf("put can down\n");
    put_can_down(813, 813, 1290);
    msleep(150);
    ao();
    msleep(150);
    move(-50,-50, 3000);
    set_servo_position(1,1210);
    move(0, 50, 800);
    move(50, 50, 700);
    set_servo_position(2,750);
    msleep(100);
    ao();
    move(-50,-50, 1000);
    move(50, 0, 800);
    move(50,50, 1800);
    ao();
    move(0, 0, 800);
    put_can_down(813, 0, 0);
    move(50, 50, 500);
    put_can_down(813, 813, 1290);
    
    return 0;
}
