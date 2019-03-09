#include <kipr/botball.h>

int main()
{
    
 enable_servos();
set_servo_position(1,1391);
set_servo_position(2,1668);
printf("hhj\n");
motor(0,55);			
motor(3,-55); 
msleep(1000);	
printf("odys awesome");
motor(0,55);
motor(3,55);
msleep(2000);
    set_servo_position(2,833);
    
    
printf("odys awesome");
motor(0,-55);
motor(3,-55);
msleep(2000);
    
    
printf("Adam is awesome ");
motor(3,-55);
motor(0,-55);      
msleep(  0);
     return 0;
}