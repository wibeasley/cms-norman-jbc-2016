#include <kipr/botball.h>

int main()
{
    printf("go straight\n");
    motor(0,45);
    motor(3,45);
    msleep(6000);
    return 0;
}
