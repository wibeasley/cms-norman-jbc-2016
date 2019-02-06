#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
   // go forwere
    
   motor(0,100);
    motor(3,100);
    msleep(1050);
    //lower clow
  enable_servos(0);  
  set_servo_position(0,737);
 disable_servos(0);
      //go bakwerds
   motor(3,-50);
    motor(0,-50);
    msleep(2000);
  
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
