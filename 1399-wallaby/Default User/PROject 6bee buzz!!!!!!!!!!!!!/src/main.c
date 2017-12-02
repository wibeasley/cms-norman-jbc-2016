#include <kipr/botball.h>

int main()
{
    printf("open claw\n");

  enable_servos();
set_servo_position(2,1399);    
msleep(2000);

    printf("close claw\n");
  enable_servos();
set_servo_position(1,1758);    
   msleep(2000);
    
    printf("open claw\n");
    enable_servos();
set_servo_position(2,75);    
 msleep(2000);
        
   printf("close claw\n");
    enable_servos();
set_servo_position(1,728);    
 msleep(2000);
    
motor(2,50);        
motor(0,50);    
msleep(1000);    
    
motor(0,50);
motor(2,10);    
msleep(3000);    
   
    enable_servos();
set_servo_position(1,1720);    
 msleep(2000);    
    

    ao();    
    return 0;
}
