#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor (0,-65);
    motor (3,-65);
    msleep(5000);
    motor (0,50);
    motor (3,0);
    msleep(8940);
    motor (0,0);
    motor (3,50);
    msleep(8940);
    motor (0,65);
    motor (3,65);
    msleep(5800);
    return 0;
}
