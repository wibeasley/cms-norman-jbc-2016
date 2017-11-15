#include <kipr/botball.h>

int main(){
    //4 from t 
    
    
    enable_servos();
    set_servo_position(1,1297);
    
        
    
    
    
  motor(0,100);
  motor(3,100);
  msleep(3500);
  motor(0,85);
  motor(3,30);
  msleep(3000);
  motor(0,50);
  motor(3,50);
  msleep(800);
    disable_servos ();
  ao();
    return 0;
    
}
