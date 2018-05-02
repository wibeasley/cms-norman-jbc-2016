#include <kipr/botball.h>
const int position_closed = 417;
const int position_open = 1000;

int move(int speed_left,int speed_right,int duration){
	motor(0,speed_left);
	motor(2,speed_right);
	msleep(duration); 
	return 0;
}   
int open_claw( int position_starting ){
   int position = position_starting;
   while( position < position_open ) {
        position = position + 10;
        set_servo_position(2, position);
        msleep(100);
    }    
    return position;    
}	
int main(){
	enable_servos(2);
    open_claw(position_closed);
}

	move( 50, 50, 3000);
  
int close_claw( int position_starting ){
	int position = position_starting;
	while( position < position_open ) {
        position = position - 10;
        set_servo_position(2, position);
        msleep(100);
    }    
    return position; 
}        
