#include <kipr/botball.h>

int main()
{
    enable_servos();
    set_servo_position(0,1601);
    
    msleep(1000);
    int step_count = 0;
    
    printf("going straight\n");
    while( analog_et(0) < 2800 ) {
        step_count = step_count + 1;
        printf("et: %i; step_count: %i\n", analog_et(0), step_count);
        

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
