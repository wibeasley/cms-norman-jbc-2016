#include <kipr/botball.h>

int main()
{
    printf("go straight\n");
    motor (0,70);
    motor (3,70);
    msleep(8000);
    motor (0,5);
    motor (3,60);
    msleep(2000);
    motor (0,60);
    motor (3,60);
    msleep(6000);
    motor (3,65);
    motor (0,1);       
    msleep(15000);
    motor (0,70);
    motor (3,70);
    msleep(8000);
    return 0;
}
