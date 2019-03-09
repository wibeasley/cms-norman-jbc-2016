#include <kipr/botball.h>

int main()
{
    printf("move forward\n"); //start between the T and the U
    motor (0,30);
    motor(3,30);
    msleep (10000);
 printf("move backwards\n");
    motor (0,-30);
    motor(3,-30);
    msleep (10000);
  return 0;
}
