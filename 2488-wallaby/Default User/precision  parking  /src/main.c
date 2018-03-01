#include <kipr/botball.h>

int main()
{
    printf("go forward");
    motor(0,20);
    motor(3,20);
    msleep(60000);      
    return 0;
}
