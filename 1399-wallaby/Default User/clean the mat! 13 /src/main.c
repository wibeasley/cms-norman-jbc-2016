#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
  printf("put arm down\n"); 
   enable_servos();                     // activate servos.
set_servo_position(2,1048);             // set position for servos. servo 1 set for 1884. 
  msleep(2000);                  
 
    printf("put arm down\n"); 
   enable_servos();                     // activate servos.
set_servo_position(1,1734);             // set position for servos. servo 1 set for 1884. 
  msleep(2000);  
    
    printf("stop billy\n");
    motor(0,00);
    motor(2,00);
    msleep(2000);
    
    
    printf("close arm\n");
    enable_servos();                     // activate servos.
set_servo_position(2,548);             // set position for servos. servo 2 set for 548. 
  msleep(2000);  

   printf("go forward\n");  
 motor(0,50);                          // go motor 0 for 50%.
 motor(2,50);                          // go motor 2 for 50%. 
msleep(1500);    
 
 printf("stop billy\n");
    motor(0,00);                       // go motor 0 for 50%.                          
    motor(2,00);                       // go motor 2 for 50%.
    msleep(2000);    
    
   printf("???\n");
    enable_servos();                     // activate servos.
set_servo_position(2,1000);             // set position for servos. servo 2 set for 1000. // 0 turn backward
  msleep(2000);  
    
   printf("turn right\n");
 motor(0,-20);    
 motor(2,20);   
msleep(500);    
      
 printf("turn right\n");
    motor(0,-50);    
 motor(2,-50);   
msleep(1000);    
    
    printf("turn left\n");
 motor(0,50);    
 motor(2,-50);   
msleep(500);       
    
  printf("go foward\n");
    motor(0,50);                          // go motor o for 50%.
 motor(2,50);                          // go motor 2 for 50%. 
msleep(1000);   
    
  printf("turn right\n");
    motor(0,-25);    
 motor(2,25);   
msleep(500);       
        
   printf("go foward\n");
    motor(0,50);                          // go motor o for 50%.
 motor(2,50);                          // go motor 2 for 50%. 
msleep(1000);   
    
 printf("stop billy\n");
    motor(0,00);                       // go motor 0 for 50%.                          
    motor(2,00);                       // go motor 2 for 50%.
    msleep(2000);       
     
 printf("put arm down\n"); 
    enable_servos();                     // activate servos.
set_servo_position(2,548);             // set position for servos. servo 1 set for 1884. 
  msleep(2000);                 
    
 
    
    
    
    
    
    return 0;
}
