#include <kipr/botball.h>

int main()
{
    printf("Moves motors forwards\n");//1 forward
    motor(0,55);
    motor(3,50);
    msleep(3000);
    
    printf("turns 360 degrees clockwise\n");//1 360 degree turn
    motor(0,-55);
    motor(3,50);
    msleep(3500);
    ao();
    
    printf("moves servos up and down\n");//1 up and down
    enable_servos(0);
    set_servo_position(0,766);
    msleep(5000);
    set_servo_position(0,1613);
    msleep(1000);
    disable_servos(0);
    ao();
    
    printf("moves motors backwards\n");//1 backwards
    motor(0,-55);
    motor(3,50);
    msleep(3000);
    
    printf("turns 360 degrees counterclockwise\n");//completed 360 degree turns
    motor(0,55);
    motor(3,-50);
    msleep(3500);
    
    printf("turns to the left,then right 1\n");//1 left and right
    motor(0,55);
    motor(3,00);
    msleep(2500);
    motor(0,00);
    motor(3,55);
    msleep(2500);
    
    printf("moves motors forwards\n");  //2 forwards
    motor(0,55);
    motor(3,50);
    msleep(2300);
    
   printf("moves motors backwards\n");//2 backwards
   motor(0,-55); 
   motor(3,50); 
   msleep(2300); 
    
   printf("turns motors left\n"); //2 left
   motor(0,55); 
   motor(3,00); 
   msleep(4500); 
    
   printf("moves motors forwards\n"); //3 forwards
   motor(0,55); 
   motor(3,50); 
   msleep(4000); 
   ao(); 
    
   printf("moves servos up and down twice\n"); //completed servos
   enable_servos(0); 
   set_servo_position(0,766); 
   msleep(6000); 
   set_servo_position(0,1613); 
   msleep(2000); 
   set_servo_position(0,766); 
   msleep(3000); 
   set_servo_position(0,1613); 
   msleep(2000); 
    
   printf("moves motors right\n"); //2 rights
   motor(0,0); 
   motor(3,50); 
   msleep(1000); 
    
   printf("moves motors backwards\n"); //3 backwards
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
