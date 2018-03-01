#include <kipr/botball.h>

int main()
{
    printf("Move motors forward\n");           //start at s -1
    motor(0,56);
    motor(3,50);
    msleep(4000);
    
    printf("turns motors clockwise\n"); 
    motor(0,20);
    motor(3,70);
    msleep(5900);
    
    printf("moves motors forwards\n");
    motor(0,56);
    motor(3,50);
    msleep(1500);
    
    printf("turns motors couterclockwise\n");
    motor(0,50);   
    motor(3,20);
    msleep(17500);
    
    printf("moves motors forwards\n");
    motor(0,56);
    motor(3,50);
    msleep(1800);

    
    printf("turns motor couterclockwise\n");
    motor(0,56);   
    motor(3,20);
    msleep(17000);
    
    
    
    
   
    
    return 0;
}
