#include <kipr/botball.h>
int main()
{
printf("Go Straight\n");
motor(3,51); //turn on motor 3 at 51% power
motor(0,45); //turn on motor 0 at 45% power
msleep(7000); //wait 7 seconds
msleep(4000);//wait 4 seconds  
printf("Turn left\n");
motor(0,20);//turn on motor 0 at 20% power 
motor(3,0);//turn on motor 3 at 0%
msleep(10000);//wait 10 seconds
printf("Go Straight\n");
motor(0,30);//turn on motor 0 at 30% power
motor(3,30);//turn on motor 3 at 30%
msleep(5000);//wait 3 seconds  printf("Go Straight\n");
    printf("Go left\n");
    
motor(3,30);//turn left    
motor(0,0);//turn on motor 0 at 0%
msleep(6000);//wait 6 seconds
    return 0;
}