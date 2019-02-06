#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor (0, 55);
    motor (3, 55);
    msleep(4300);
    motor (0, -55);
    motor (3, -55);
    msleep(4300);
    return 0;
}
