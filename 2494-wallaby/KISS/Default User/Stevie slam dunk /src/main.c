#include <kipr/botball.h>
int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(3,900);
    
    while(get_motor_position_counter(0) < 3000) {
        
        
    }
    
    
    disable_servos (); 
    return 0;
}
