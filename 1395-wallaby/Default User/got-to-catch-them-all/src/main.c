#include <kipr/botball.h>

int main()
{
    printf("going strait\n");
    motor(0,60);
    motor(3,60);
    msleep(5000);
        
    printf("tern\n");
    motor(0,20);
    motor(3,-20);
    msleep(5000);
  
    printf("go strait\n");    
    motor(0,60);    
    motor(3,60);    
    msleep(1000);    
        
    printf("turn left\n"); 
    motor(0,10);
    motor(3,-10);
    msleep(5000);
    
    printf("going strait\n");
    motor(0,60);
    motor(3,60);
    msleep(5000);
   
    return 0;
}     
        
        
        
        