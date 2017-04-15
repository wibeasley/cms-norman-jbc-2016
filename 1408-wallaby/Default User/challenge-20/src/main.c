#include <kipr/botball.h>

int main()
{
    motor(0,50);
    motor(3,50);
    msleep(6500);
    ao();
    
    motor(0,-50);
    motor(3,-50);
    msleep(6500);
    ao();
    
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("Hello World\n");
    return 0;
}
