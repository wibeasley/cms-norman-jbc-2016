#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   
    
   
    printf("set arm\n");
    
    enable_servos(0);
    set_servo_position(1,1712);
    msleep(500);
    
    printf("set arm\n");
    enable_servos(2);
    set_servo_position(2,1024);
    msleep(500);
    
    
    printf("moving forward\n");
    int step_count = 0;
    while (analog (5)<=2700 ) {    
        step_count = step_count + 1 ;
        motor(0,50);
        motor(2,50);
        msleep(100);
    }
       printf("step_count:%i\n", step_count);   
    
    motor(0,50);
    motor(2,3);  
    msleep(4000); 
   
    printf("moving forwards\n");
      motor(0,50);
      motor(2,50);
      msleep(step_count * 100); 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
