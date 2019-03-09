#include <kipr/botball.h>

int main()
{
    printf("go strait \n");
    motor(0,62);
    motor(3,60);
    msleep(3000);
    
    motor(0,0);
    motor(3,0);
    msleep(5000);
    
    printf("go backwards \n");
    motor(0,-62);
    motor(3,-60);
    msleep(3000);

     printf("go strait \n");
    motor(0,62);
    motor(3,60);
    msleep(4500);
   
      printf("turn right\n");
    motor(0,-20);
    motor(3,20);
    msleep(1500);
   
    printf("go strait/n");
    motor(0,62);
    motor(3,60);
    msleep(12000);
    
    
    
    
    
    
    
    
    
    return 0;
}
