#include <kipr/botball.h>

int main()
{
     
    printf("go straight\n");
motor(0,50);
motor(3,50);
 msleep(5000);
    printf("turn left\n");
    motor(0,80);
    motor(2,70);
    msleep(5000);
    printf("go sraight\n");
    motor(0,70);
    motor(2,60);
    msleep(4000);
    return 0;
    
}
