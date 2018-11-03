#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor (0, 50);
    motor (3, 50);
    msleep(8500);
    motor (0,85);
    motor (3,35);
    msleep(5300);//need turn more
    motor (0,50);
    motor (3,50);
    msleep(8500);
    return 0;
}
