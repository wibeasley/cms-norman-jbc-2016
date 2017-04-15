#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
     printf("servos get reedy.\n");
     enable_servos();   
    set_servo_position(0,1542);
    set_servo_position(3,1542);  
  motor(0,50); 
    
    
    
    
    
    
    return 0;
}
