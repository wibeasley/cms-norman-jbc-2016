#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    motor(3,30);
    motor(0,35);
    msleep(6000);
    printf("left turn\n");
    motor(0,59);
    msleep(4000);
     printf("go forward\n");
    motor(0,55);
    motor(3,52);
    msleep(1000);
     printf("left turn\n");
    motor(0,52);
    motor(3,45);
    msleep(3500);
      printf("go forward\n");
    motor(3,70);
    motor(0,85);
    msleep(5000);
    return 0;
    
}
