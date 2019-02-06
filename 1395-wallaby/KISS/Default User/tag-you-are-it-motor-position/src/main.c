#include <kipr/botball.h>

int main()
{
    printf("tag-you-are-it-motor-position\n");
 
    enable_servos();
    set_servo_position(0,1601);
    
    msleep(1000);
    int step_count = 0;
    
    printf("going straight\n");
    clear_motor_position_counter(0);
    while(get_motor_position_counter(0)<10000  ) {
        step_count = step_count + 1;
        printf("motor_position: %i; step_count: %i\n", get_motor_position_counter(0), step_count);
        

        motor(3,50);
        motor(0,50);
        msleep(100);
    }
    
    int duration_backwards = step_count * 100;
    
    printf("going backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(duration_backwards);   
    disable_servos ();     

    return 0;
}
