#include <kipr/botball.h>

int move (int speed_left, int speed_right, int duration, int claw_up){ 
    
    enable_servos();
    printf("\n");
    motor(0,speed_left);
    motor(3,speed_right); 
    msleep(duration);
    set_servos_position(0,claw_up);
    return 0;   
}
  
int main() {
   move(50,50,5000);//move forward
   
    
    
    
    
    
    return 0;
}
