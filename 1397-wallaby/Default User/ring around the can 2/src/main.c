#include <kipr/botball.h>
//6 squares from the right
int main()
{
    motor (0,95);
    motor (3,95);
    msleep (2500);

    motor (0,65);
    motor (3,30);
    msleep (5000);

    motor (0,75);
    motor (3,55);
    msleep (3200);

    motor(0,50);
    motor(3,50);
    msleep(1900);
          
    ao();
    return 0;
}
