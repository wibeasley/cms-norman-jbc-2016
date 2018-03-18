#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   motor(0, 50);
    motor(3, 50);
    msleep(6000);//Sleep for 6 seconds (ie, 6000 millisecon)
    motor (3, 50);
    motor (0, 20);
    msleep (5000);
    motor (0, 50);
    motor (3, 50);
    msleep (6000);
    
    motor(3,60);
    motor(0,30);
    msleep(1000);
    
    motor (0, 50);
    motor (3, 50);
    msleep (6000);
    return(0);
 }