#include <kipr/botball.h>

int main()
{
    printf("Go straight 6 sec\n");
    motor(3,60);
    motor(0,60);
    msleep(6000);


    printf("qqqqq\n");
    motor(3,50);
    motor(0,20);
    msleep(9000);
    
    printf("qqqqq\n");
    motor(3,40);
    motor(0,40);
    msleep(1000);
    
    printf("qqqqq\n");
    motor(0,20);
    motor(3,50);
    msleep(2000);

    printf("qqqqq\n");
    motor(0,50);
    motor(0,50);
    msleep(6000);
    
    printf("qqqqq\n");
    motor(3,60);
    motor(0,30);    
    msleep(4000);
    
    printf("end the program and return 0\n");
    return (0);
}

