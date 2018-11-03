#include <kipr/botball.h>
int main()
{
printf("Go Straight\n");
motor(3,30); //turn on motor 3 at 51% power
motor(0,30); //turn on motor 0 at 45% power
msleep(2000);//wait 4 second
   
printf("Go Straight\n");
motor(0,45);//turn on motor 0 at 30% power
motor(3,45);//turn on motor 3 at 30%
msleep(2000);//wait 3 seconds  printf("Go Straight\n") 
    
printf("Turn right\n");
motor(3,55);
motor(0,65);
msleep(4000);
    
printf("turn left\n");
motor(3,50);
motor(0,65);
msleep(5000);    
    
return 0;
}

