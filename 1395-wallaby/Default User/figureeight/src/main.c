#include <kipr/botball.h>

int main()
{
    printf("figure eight\n");
    
     printf("going forward\n");
    motor(0,50);
    motor(3,50);
    msleep(4000);
    
     printf("turning\n");
    motor(0,50);
    motor(3,00);
    msleep(1000);
    
     printf("going forward\n");   
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    motor(3,50);
    motor(0,00);
    msleep(2000);
    return 0;
}
        
