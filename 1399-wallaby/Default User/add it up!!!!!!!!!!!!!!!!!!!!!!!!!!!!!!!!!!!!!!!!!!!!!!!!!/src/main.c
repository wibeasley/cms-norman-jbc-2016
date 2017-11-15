#include <kipr/botball.h>

int main()
{
 printf("go forward\n");   
 motor(2,50);   
 motor(0,50);//go forward.
 msleep(4200);   
 
printf("go down\n");
enable_servos();    
set_servo_position(1,2047);
msleep(1000);//go up and down

motor(2,0);
motor(0,0);
msleep(2000);
    
printf("go up\n");
set_servo_position(1,1539);   
msleep(2000);    
disable_servos();    
   
motor(2,50);
motor(0,50);
msleep(1000);
 
 
printf("go down\n");
enable_servos();    
set_servo_position(1,2047);
msleep(1000);//go up and down
  ao(); 
    
    printf("Hello World\n");
    
    return 0;


}

    