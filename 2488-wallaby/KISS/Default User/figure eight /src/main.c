#include <kipr/botball.h>

int main()
{
  
    printf("Hello World\n");
motor(0,50);    
motor(3,50);   
msleep(3000);
printf("turn right\n");
 motor(0,40);
 motor(3,50);
  msleep(6000);
  printf("turn left\n");
  motor(0,50);  
  motor(3,30);  
   msleep(3000);
    printf("turn left\n");
 motor(0,50);   
  motor(3,40);  
  msleep(1000);
  printf("turn left\n");  
    motor(0,50);
 motor(3,30);   
  msleep(3000);  
    
    return 0;
    
    
    
}
