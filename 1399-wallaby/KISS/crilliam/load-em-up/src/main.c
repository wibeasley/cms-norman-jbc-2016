#include <kipr/botball.h>

int main()
{
    printf("go sraight\n");  
    motor (0,55);
    motor (3,55);
    msleep(4200);
    motor (0,0);
    motor (3,0);
    msleep(700);
    motor (0,-60);
    motor (3,-60);
    msleep(4500);
    motor (0,55);
    motor (3,55);
    msleep(3000);
    motor (0,55);
    motor (3,5); 
    msleep(2200);
    motor (0,5);
    motor (3,55);
    msleep(2200);
    motor (0,55);
    motor (3,55);
    msleep(2300);
    motor (0,10);
    motor (3,50);
    msleep(1000);
    motor (0,50);
    motor (3,50);
    msleep(1000);
    motor (0,5);
    motor (3,50);
    msleep(500);
    motor (0,40);
    motor (3,40);
    msleep(1800);
    motor (0,-45);
    motor (3,-45);
    msleep(2000);
    motor (0,45);
    motor (3,5);
    motor (0,45);
    motor (3,45);
    msleep(5000);
    return 0;
}
