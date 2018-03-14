#include <kipr/botball.h>

int main()
{
  printf("put arm down\n"); 
   enable_servos();
set_servo_position(1,1955);    
    msleep(2000);   

    printf("set while loop\n");        // the sensor with the eyes:  looking at black:3370  looking at white:3444
    while (analog (0) >= 3456 )                                                     
    { msleep(15);
        
        if (analog (2) <= 1200){       // the reflector sensor:    looking at black:1655  looking at white:1745
            motor(0,50);
            motor(2,00);}
 
        else { 
             motor(2,20);
             motor(0,00);}  
     
     ao();
     
     }    
   return 0;
}
