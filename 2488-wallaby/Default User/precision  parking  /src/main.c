#include <kipr/botball.h>

int main()
{
    printf("go forward");
    motor(0,20);
    motor(3,20);
    msleep(100000);      
    return 0;
}
