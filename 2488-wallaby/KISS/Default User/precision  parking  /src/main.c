#include <kipr/botball.h>

int main()
{
    printf("go forward");
    motor(0,20);
    motor(3,20);
    msleep(6000);      
    
    printf("go forward\n");
    motor(0,20);
    motor(3,20);
    msleep(9000);
    
    printf("go backwards\n");
    motor(0,-29);
    motor(3,-29);
    msleep(10500);
    
    printf("turn right\n");
    motor(0,35);
    motor(3,25);
    msleep(6000);
    
    
    printf("turn left\n");
    motor(0,20);
    motor(3,35);
    msleep(7500);
    
    
    printf("go forward\n");
    motor(0,60);   
    motor(3,60);
    msleep(3500);
    
    return 0;
    
}   
    