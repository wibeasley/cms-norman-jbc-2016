#include <kipr/botball.h>
// on the Tnext to the S y'all
int move(int speed_left, int speed_right, int duration){

    motor(3, speed_left);
    motor(0, speed_right);
    msleep( duration); 
    return 0;   
}

int main(){

    enable_servos();
    
    
    move(50, 50, 4800);//forward
    move(50, 0, 2600);//turn left
    move(50, 50, 2800);//forward
    move(0, 50, 2700);//turn right
    move(50, 50, 4500);//forward
    move(0, 50, 2500);//turn right
    move(50, 50, 2500);//forward
    move(0, 50, 2200);//turn right
    move(50, 50, 2800);//forward
    move(0, 50, 2100);//turn right
    move(50, 50, 2800);//forward
    move(50, 0, 2700);//turn left
    move(55, 55, 5000);//forward
    printf("Hello World\n");
    
    return 0;
}
