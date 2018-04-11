#include <kipr/botball.h>

int move( int speed_left, int speed_right, int duration ) {
    motor(0,speed_left);
    motor(3,speed_right);
    msleep(duration);
    return 0;
}

int main() {
    move(50,50,2000); // forword
    move(50,20,2000); // turn left
    move(50,50,2000);// forword
   
    return 0;
}
