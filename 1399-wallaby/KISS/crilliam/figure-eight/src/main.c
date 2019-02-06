#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor (0,60);
    motor (3,60);
    msleep(4000);
    motor (0,0);
    motor (3,45);
    msleep(2599);
    motor (0,40);
    motor (3,40);
    msleep(3000);
    motor (0,65);
    motor (3,15);
    msleep(2500);
    motor (0,40);
    motor (3,40);
    msleep(3000);
    motor (0,40);
    motor (3,10);
    msleep(2500);
    motor (0,40);
    motor (3,40);
    msleep(2500);
    motor (0,50);
    motor (3,10);
    msleep(4000);
    motor (0,40);
    motor (3,40);
    msleep(2000);
    motor (0,40);
    motor (3,15);
    msleep(3500);
    motor (0,40);
    motor (3,40);
    msleep(2000);
    motor (0,10);
    motor (3,50);
    msleep(2900);
    motor (0,50);
    motor (3,50);
    msleep(5600);
    return 0;
}
