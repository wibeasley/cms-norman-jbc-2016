#include <kipr/botball.h>

int main()
{
printf("go forwards\n");
    
motor(0,50);
motor(2,50);  
msleep(7000);    
    
printf("turn clockwise\n");
motor(0,10);    
motor(2,60);    
msleep(5000);    
    
printf("go backwards\n");
motor(2,-50);    
motor(0,-50);    
msleep(4000);    
    
motor(0,-50);    
motor(2,-10);    
msleep(4000);  

enable_servos();
set_servo_position(1,1288);    
 msleep(2000);   

enable_servos();
set_servo_position(1,1713);    
 msleep(2000);          

enable_servos();
set_servo_position(1,1288);    
 msleep(2000);           

enable_servos();
set_servo_position(1,1713);    
 msleep(2000);              

enable_servos();
set_servo_position(1,1288);    
  msleep(2000);                 

 enable_servos();
set_servo_position(1,1713);    
 msleep(2000);        

enable_servos();
set_servo_position(2,1399);    
 msleep(2000);          
    
enable_servos();
set_servo_position(2,148);    
 msleep(2000);              
disable_servos();    
    
printf("turn clockwise\n");
motor(2,-10);    
motor(0,-50);    
msleep(2000);    
    
printf("go backwards\n");
motor(2,-50);    
motor(0,-50);    
msleep(4000);    
    
printf("go forwards\n");
motor(2,50);
motor(0,50);
msleep(3000);    
    
printf("turn clockwise\n");
motor(2,50);    
motor(0,10);    
msleep(2000);    
    
motor(2,10);    
motor(0,50);    
msleep(2000);  
    
motor(0,50);    
motor(2,50);    
msleep(2000);

motor(0,00);
motor(2,00);    
msleep(1000);    
    
motor(2,-50);    
motor(0,-50);    
msleep(2000);    
    
motor(0,50);    
motor(2,50);    
msleep(2000);

motor(0,00);
motor(2,00);    
msleep(1000);    
    
motor(2,-50);    
motor(0,-50);    
msleep(2000);    
        
motor(0,50);    
motor(2,50);    
msleep(2000);

motor(0,00);
motor(2,00);    
msleep(1000);    
    
motor(2,-50);    
motor(0,-50);    
msleep(2000);    
       
motor(0,50);    
motor(2,50);    
msleep(2000);

motor(0,00);
motor(2,00);    
msleep(1000);    
    
motor(2,-50);    
motor(0,-50);    
msleep(2000);    
        
motor(0,50);    
motor(2,50);    
msleep(2000);

motor(0,00);
motor(2,00);    
msleep(1000);    
    
motor(2,-50);    
motor(0,-50);    
msleep(2000);    
        
    
    
    
ao();  
    return 0;
}
