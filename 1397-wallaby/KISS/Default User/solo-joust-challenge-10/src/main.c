#include <kipr/botball.h>

int main()
{
    enable_servos();
    set_servo_position(1,1049);
    
    
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(2000);
  
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(2000);
   
    printf("stop/n");
    motor(0,0);
    motor(3,0);
    msleep(1000);
    
    //printf("go straight\n");
    //motor(0,67);
    //motor(3,55);
   // msleep(2000);
  
    //printf("go straight\n");
    //motor(0,55);
    //motor(3,52);
    //msleep(2000);
    
     return 0;
}
