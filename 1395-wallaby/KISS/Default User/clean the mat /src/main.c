#include <kipr/botball.h>
    
	
int move (int speed_left, int speed_right, int duration){ 
    printf("\n");
    motor(0,speed_left);
    motor(3,speed_right); 
    msleep(duration);
    return 0;   
    }
int claw_up() {
    set_servo_position(0,0);
    return 0;
	}
int claw_down() {
    set_servo_position(0,748); 
    return 0;
	}
int main() { 
    enable_servos();
    move(50,53,2000);//move forward
    set_servo_position(0,claw_up);
    disable_servos();
    return 0;
    }