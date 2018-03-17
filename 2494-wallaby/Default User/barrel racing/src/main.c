#include <kipr/botball.h>

int main()
{
    printf("go straight");
    motor(0,26);
    motor(3,26);
    msleep(11000);
    printf("turn right");
    motor(0,19);
    motor(3,25);
    msleep(13000);
    return 0;
}
