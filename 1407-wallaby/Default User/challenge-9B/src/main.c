#include <kipr/botball.h>

int main()
{
    motor(0,50);
    motor(3,50);
    msleep(1000);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
    printf("Hello World\n");
    return 0;
}
