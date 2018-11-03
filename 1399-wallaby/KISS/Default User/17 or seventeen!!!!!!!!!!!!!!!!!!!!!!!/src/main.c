#include <kipr/botball.h>

int main() {
	printf("put arm down\n"); 
    enable_servos();                    // activate servos.
    set_servo_position(1,1646);             // set position for servos. servo 1 set for 1884. 
    msleep(2000);                       // go for 2 seconds.
    printf("set while loop\n");        // port 0,  the sensor with the eyes:  looking at black:2912  looking at white:2217
    while (analog (0) <= 2550) {        // the sensor with the eyes sends information to the brain. if the number is less than or equal to 3550
        printf("analog 0 value: %i\n", analog(0));
        msleep(10);                  //it sets while loop for ten milisecounds, then it starts over. 
                                      
        printf("analog 2 value: %i\n", analog(2));
        if (analog (2) >= 3652) {   // port 2 the reflector sensor:   looking at black:3870 looking at white:3516 
			motor(2,00);           // if the reflector sensor is greater than or equals to  3400 than...
     		motor(0,50);						// motor 2 go 0%.
		     // motor 0 go 50% causing the robot to turn left
        } else {                     
            motor(2,50);           // if it is not less than or equal to 3704 than...
            motor(0,00);                       // motor 2 go 50%.         
		}   
    } //end while loop
   return 0;
    
}

