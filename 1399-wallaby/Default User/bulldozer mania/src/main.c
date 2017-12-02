#include <kipr/botball.h>

int main()
{
   
  motor(2,50);
  motor(0,50);//go forword 
  msleep(8000);  
  
 
    
  motor(0,5);
 motor(2,50); //turn right 
 msleep(4000);   
    
 motor(2,50);
 motor(0,50);//go forword
 msleep(11000);
  ao(); 
    
    
    
    
    
    
    
     printf("Hello World\n"); 
    
 return 0;
}
