#include <kipr/botball.h>

int main()
{
        printf("go forward/n");
    motor(0,30);
motor(3,30);
    msleep(8000);
printf("turn right/n");
    motor(0,10);
 motor(3,30);   
msleep(4000);

        printf("go forward/n");
    motor(0,30);
motor(3,30);
    msleep(5000);
    printf("turn left\n");
    motor(0,30);
    motor(3,11);
    msleep(10000);
    return 0;
}
