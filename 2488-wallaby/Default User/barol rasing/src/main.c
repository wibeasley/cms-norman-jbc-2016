#include <kipr/botball.h>

int main()
{
    printf("Go straight 6 sec\n");
    motor(3,60);
    motor(0,60);
    msleep(6000);


    printf("turn right\n");
    motor(3,50);
    motor(0,20);
    msleep(9000);
    
    printf("go straight for 1 second\n");
    motor(3,40);
    motor(0,40);
    msleep(1000);
    
    printf("turn right for 2 seconds\n");
    motor(0,20);
    motor(3,50);
    msleep(1000);

    printf("go straight for 3 seconds\n");
    motor(3,50);
    motor(0,50);
    msleep(1000);
    
    printf("go right for 3 seconds\n");
  	motor(3,80);
  	motor(0,30);
  	msleep(4000);
    motor(0,150);
        motor(3,40);
    msleep(10000);
    motor(3,60);
    motor(0,30);
    msleep(5000);
   
    
    printf("end the program and return 0\n");
    return (0);
}

