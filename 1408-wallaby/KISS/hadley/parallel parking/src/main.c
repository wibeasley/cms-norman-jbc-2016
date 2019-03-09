#include <kipr/botball.h>

int main()
{
    printf("move forward\n"); //start between the T and the U
    motor (0,30);
    motor(3,30);
    msleep (10000);
 printf("move backwards\n");
    motor (0,-30);
    motor(3,-30);
    msleep (10000);
  printf("move forward\n");
  motor(0,30);
  motor(3,30);
msleep(20000);
 printf("move backwards\n");
  motor(0,-20);  
 motor(3,-20);        
 msleep(20000);       
    
  return 0;
}
