#include <kipr/botball.h>
int move(int speed_left, int speed_right, int duration){

    motor(3, speed_left);
    motor(0, speed_right);
    msleep( duration); 
    return 0;   
}
int main()
{
    printf("Hello World\n");
    move(50, 50, 5500);
    move(0, 0, 2000);
    
    move(50, 50, 2100);
    move(50, 0, 930);
    move(50, 50, 2300);
    
    return 0;
}
