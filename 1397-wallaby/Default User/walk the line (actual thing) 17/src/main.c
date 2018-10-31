#include <kipr/botball.h>

int main() { 
	printf("set servo position\n");
    enable_servos();
    set_servo_position(1,1111);
    set_servo_position(2,753);
    msleep(200);

    printf("StartWhileLoop; analog 1 value: %i\n", analog(1));

    while (analog (1)<=2600) {
    	printf("within loop; analog 1 value: %i\n", analog(1));
        msleep(10);
 	    
        printf("within loop; analog 5 value: %i\n", analog(5));
        if (analog (5)>=2435) {
           motor(0,20);
           motor(3,0);
           continue;
        } else if (analog(5) < 2435){
          motor(0,0);
          motor(3,20);
          continue;
		} 
        else {
            break;
        }    
    }  // end while loop 

    ao (); 
    return 0;
}
