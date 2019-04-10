#include <kipr/botball.h>

int main() {

    printf("go strait\n");
    enable_servos();
    set_servo_position(0,1879);
    clear_motor_position_counter(3);
    while(get_motor_position_counter(3) < 2800) { 
        printf("motor position: %i\n", get_motor_position_counter(3));
        motor(0,30);
    	motor(3,30);
    	msleep(100);
    }
    
    
    
    
    
    return 0;
}
