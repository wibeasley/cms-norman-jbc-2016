#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
  
    
    
 printf("BillyBob is moving forward!\n");
    int step_count = 0;
    while (analog (0) <= 2500 ) 
    {    
        step_count = step_count + 1 ;
        motor(0,20);
        motor(2,20);
        msleep(100);
    }
   
        
     printf("BillyBob is moving backward!\n");
    motor(2,-20);
    motor(0,-20); 
    msleep(step_count * 100);
     
    
    
    
    
    
    
    
    
    
    return 0;
}
