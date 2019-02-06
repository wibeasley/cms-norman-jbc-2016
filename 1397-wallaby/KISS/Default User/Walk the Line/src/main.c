#include <kipr/botball.h>

int main()
{
    
           printf("set servos\n");
    printf("set servos\n");
    set_servo_position(1,593);
    msleep(200);
    ao();
    
    printf("Start while loop\n");    
     while (analog(0)<=4000) {  
         msleep(5);
         //If Mr. Reflecter sees dark go right      
     	if (analog(5) >= 2440) {
            msleep(5);
			motor(3,50);
         	motor(0,-5);}       
        else {     //other wise go left
            motor(3,-5);
            motor(0,50);}
	}     //End the while loop
    ao();
    

    return 0;
}
