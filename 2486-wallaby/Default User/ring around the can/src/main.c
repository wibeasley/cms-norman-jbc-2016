#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(3,15);
    motor(0,15);
    msleep(20000);
    printf("left turn\n");
    motor(0,52);
    msleep(2500);
     printf("go forward\n");
    motor(0,52);
    motor(3,52);
    msleep(2500);
     printf("left turn\n");
    motor(0,52);
    motor(3,0);
    msleep(3000);
      printf("go forward\n");
    motor(3,70);
    motor(0,70);
    msleep(6000);
    return 0;
    
}
