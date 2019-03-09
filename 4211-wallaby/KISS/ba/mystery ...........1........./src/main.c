#include <kipr/botball.h>

int main()
{
    
 enable_servos();
set_servo_position(1,1439);
set_servo_position(2,1668);
printf("hhj\n");
motor(0,55);			
motor(3,-55); 
msleep(1000);	
printf("odys awesome");
motor(0,55);
motor(3,55);
msleep(1800);
    set_servo_position(2,1169);
    
    
printf("odys awesome");
motor(0,-55);
motor(3,-55);
msleep(1000);
    
    
printf("Adam is awesome ");
motor(3,-55);
motor(0,-55);      
msleep(500);
    printf("Adam is awesome ");
motor(3,55);
motor(0,-55);      
msleep(1000);
    
printf("");
    motor(3,55);
    motor(0,55);
    msleep(8000);
    
    printf("");
    motor(3,-55);
    motor(0,55);
    msleep(5000);
    printf("");
    motor(3,55);
    motor(0,55);
    msleep(2500);
    printf("O");
     motor(3,-22);
    motor(0,55);
    msleep(800);  
    printf("O");
     motor(3,-22);
    motor(0,55);
    msleep(1000);
    
   
    
    
     return 0;
}