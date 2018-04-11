#include <kipr/botball.h>
int move (int speed_left, int speed_right, int duration){
    
  motor(0,speed_left);  
  motor(3,speed_right);  
  msleep(duration);  
  return 0;
}
int main(){
  	move(50,50,2000); //forward
    move(20,50,2000); //turn left
    move(30,-30,2000); //pivot right
    return 0;
}
