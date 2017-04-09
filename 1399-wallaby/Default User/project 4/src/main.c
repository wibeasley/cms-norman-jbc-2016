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
    msleep(3000);
    
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
    return 0;
}