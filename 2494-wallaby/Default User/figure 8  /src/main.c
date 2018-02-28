#include <kipr/botball.h>
int main()
{
   printf("Go Straight\n");
    motor(3,51);
motor(0,45);
msleep(7000);
msleep(4000);
motor(3,50);
motor(0,100);
motor(3,50);   
motor(0,50);    
motor(0,50);
motor(3,20);   
motor(3,70);    
motor(0,20);
    motor(3,0);
        msleep(10000);
motor(0,60);    
motor(3,60);
    return 0;
}