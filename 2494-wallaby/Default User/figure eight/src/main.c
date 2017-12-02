#include <kipr/botball.h>

int main()
{printf("go forward\n");
motor(3,35);
 motor(0,35);
msleep(10000);     
  
printf("turn right\n");
motor(3,30);
msleep(8000);  

printf("go forward\n");
motor(3,15);
motor(0,15); 
msleep(8000);
printf("turn left\n");
motor(0,25);
msleep(10000);
 return 0;
}










