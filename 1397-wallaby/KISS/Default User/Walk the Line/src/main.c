#include <kipr/botball.h>

int main()
{
    
     printf("put arm down\n"); enable_servos(); 
    set_servo_position(1,1646); 
    msleep(2000);
     
    while (analog (0) <= 4550) { 
    if (analog (5) >= 3652) { motor(0,50);}	
    else { motor(3,52);}
    }
    return 0;
}
