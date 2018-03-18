#include <kipr/botball.h>

int main()
{
    printf("forward1");
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    printf("spin around1");
    motor(0,50);
    motor(3,5);
    msleep(1000);
    return 0;
}
 