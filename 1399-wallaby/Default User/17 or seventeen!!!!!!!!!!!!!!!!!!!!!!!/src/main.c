#include <kipr/botball.h>

int main()
{
  printf("put arm down\n"); 
   enable_servos();                     // activate servos.
set_servo_position(1,1884);             // set position for servos. servo 1 set for 1884. 
    msleep(2000);                       // go for 2 seconds.

    printf("set while loop\n");        // port 0,  the sensor with the eyes:  looking at black:2865  looking at white:2152
    while (analog (0) <= 2420)        // the sensor with the eyes sends information to the brain. if the number is less than or equal to 2420
        { msleep(10);                 //it sets while loop for ten milisecounds, then it starts over. 
                                      
                                                                            
		if (analog (2) >= 3800)    // port 2 the reflector sensor:   looking at black:3925 looking at white:3704 
    		{  motor(2,00);           // if the reflector sensor is greater than or equals to  3800 than...
     		  motor(0,50);						// motor 2 go 0%.
                   }     // motor 0 go 50% causing the robot to turn left
                                    
         else {                     
             motor(2,50);           // if it is not less than or equal to 3704 than...
             motor(0,00);}                       // motor 2 go 50%.         
                                     // motor 0 go 0%. causing the robot to turn right
                                  
     
    
        
                                      
           
        
        
        
        
        }    
   return 0;
    
}

