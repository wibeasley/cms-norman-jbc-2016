#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   
   motor(0,100);
    motor(3,100);
    msleep(1050);
    
  motor(3,50);
    motor(0,50);
    msleep(10000);
    
  return 0;
}
