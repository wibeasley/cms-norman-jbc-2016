#include <kipr/botball.h>

int main()
{
    printf("right 9 up 7");
    
    printf("go forward");
    motor(3,69);
    motor(0,69);
    msleep(2800);
    printf("turn counterclockwise");
    motor(3,69);
    motor(0,29);
    msleep(8000);
    printf("go forward");
    motor(3,69);
    motor(0,69);
    msleep(2500);
    printf("turn counterclockwise");
    motor(3,69);
    motor(0,40);
    msleep(12000);
    printf("go forward");
    motor(3,50);
    motor(0,50);
    msleep(1000);
    printf("turn clockwise");
    motor(0,60);
    motor(3,31);
    msleep(5000);
    
     printf("go forward");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
   printf("turn counterclockwise"); 
   motor(3,30);
    motor(0,60);
    msleep(1000);
    
    printf("go forward"); 
    motor(0,50);
    motor(3,50);
    msleep(1000); 
    printf("turn");
    motor(0,60);
    motor(3,30);
    msleep(3000);
    printf("go backwards");
    motor(0,-50);
    motor(3,-50);
    msleep(6000);
    return 0;
}