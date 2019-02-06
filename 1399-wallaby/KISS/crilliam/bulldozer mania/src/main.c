#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor (0,69);
    motor (3,69);
    msleep(7500);
    motor (0,45);
    motor (3,3);
    msleep(5600);
    motor (0,80);
    motor (3,80);
    msleep(6000);
    return 0;
}
