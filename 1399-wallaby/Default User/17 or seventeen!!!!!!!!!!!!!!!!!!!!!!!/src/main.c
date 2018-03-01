#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    
    
    
    
     printf("BillyBob is moving forward\n");
    int step_count = 0;
    while (analog (2) <= 2500 ) {    
        step_count = step_count + 1 ;
        motor(0,20);
        motor(2,20);
        msleep(100);
    }
      
     printf("BillyBob is moving backward\n");
     int step_count = 0;
     while (analog (2) <= 2500 ) { 
    step_count = step_count + 1 ;
        motor(0,-20);
        motor(2,-20);
        msleep(4000);
     }
    
         
         
         
        
    
    
    
    
    
    
    return 0;
}
