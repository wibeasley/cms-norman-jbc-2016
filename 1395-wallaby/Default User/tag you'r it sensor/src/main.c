#include <kipr/botball.h>

int main()
{
    printf("move servo to position\n");
    enable_servos();
    set_servo_position(0,741);
    set_servo_position(3,0); 
    msleep(4600);
    
    printf("going forwards \n");
    int step_count=0;
    while (analog (5)<=2700) {
        step_count = step_count + 1;         
     	motor(0,10);
     	motor(3, 10);
        msleep(100);
        
    }
    printf("step_count: %i/n", step_count);
    
    printf("going backworeds \n");
    motor(0,10);
    motor(3,10);
    msleep(step_count *100);
           
    return 0;
}
