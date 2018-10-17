#include <kipr/botball.h>

int main()
{
    printf("figure eight -- version 2\n");

    printf("go straight\n");
	motor(0,50);
	motor(3,50);
	//(5000);
    //printf("
    msleep(5000);
    printf("turn right\n");
    motor(0,30);
    motor(3,100);
    msleep(1000);
printf("go straight\n");
    motor(0,60);
    motor(3,70);
    msleep(3000);
    printf("moves mortors right/n");
printf("turn left");
motor(0 200);
    motor(3,50);
    msleep(2000);
    return(0);
}