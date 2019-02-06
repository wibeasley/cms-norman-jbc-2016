#include <kipr/botball.h>

int main()
{
    printf("move servo to position\n");
    enable_servos();
    set_servo_position(0,1597);
    set_servo_position(3,0); 
    msleep(4600);
    
    printf("going forwards \n");
    int step_count=0;
    while (analog (0)<=2700) {
        printf("sensor \n");
        step_count = step_count + 1;         
     	motor(0, 10);
     	motor(3, 10);
        msleep(100);
        
    }
    printf("step_count: %i\n", step_count);
    int duration_backward = step_count*100;
    
    printf("going backwards for %i milliseconds.\n", duration_backward);
    motor(0,-10);
    motor(3,-10);
    msleep(duration_backward);
           
    return 0;
}
