#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    
   motor(0,50);
    motor(3,50);
    msleep(3000);
    motor(0,50);
    motor(3,30);
    msleep(4000);
    
    printf("turning\n");
    motor(3,50);
    motor(0,20);
    msleep(4000);
    
    printf("turning\n");
    motor(3,50);
    motor(0,30);
    msleep(2000);
    
    printf("turning\n");
    motor(3,50);
    motor(0,20);
    msleep(3000);
    
    printf("tunrning\n");
    motor(3,50);
    motor(0,20);
    msleep(1000);
    
    printf("turning\n");
    motor(3,50);
    motor(0,20);
    msleep(2000);
    
    printf("turning\n");
    motor(3,25);
    motor(0,50);
    msleep(4500);
    
    printf("going straight\n");
    motor(3,50);
    motor(0,50);
    msleep(3500);
    
    
    return 0;
}