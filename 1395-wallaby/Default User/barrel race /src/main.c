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
    motor(0,25);
    msleep(7300);
    printf("go f orward");
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
    msleep(1000);
    
   printf("turn counterclockwise"); 
   motor(3,30);
    motor(0,60);
    msleep(1000);
    
    printf("go forward"); 
    motor(0,50);
    motor(3,50);
    msleep(1000); 
    
    motor(0,60);
    motor(3,30);
    msleep(2000);
     
   // printf("go backward");
    //motor(3,-100);
    //motor(0,-100);
    //msleep(2000);
   // printf("go forward");
   // motor(3,90);
   // motor(0,80);
   // msleep(1000);
    return 0;
}