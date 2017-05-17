#include <kipr/botball.h>

int main()
{
    printf("move servo up\n");
    enable_servos();
    set_servo_position(1,530); 
    
    printf("go forward\n");
    motor(0,30);
    motor(3,30);
   
    int loop_count = 0;
    
    int top_hat = analog(5);
    printf("%i\n", top_hat);
    
     while (top_hat > 200){
     	top_hat = analog(5);  
        msleep(8); 
        loop_count += 1;
     	printf("%i: %i\n", loop_count, top_hat);    
     }
    
    motor(0,-30);
    motor(3,-30);
    msleep(8 * loop_count);
    
        
    
                          
   return 0;
}
