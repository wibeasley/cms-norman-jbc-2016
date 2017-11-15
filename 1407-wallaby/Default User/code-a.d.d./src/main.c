#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
    printf("moves motors\n");
    motor(0,52);
    motor(3,50);
    msleep(5000);
    ao();
    printf("makes servos ready\n");
    enable_servo(0);
    set_servo_position(0,2001);
    msleep(1000);
    ao();
   printf("moves servos back in position\n"); 
   enable_servo(0); 
   set_servo_position(0,961); 
   msleep(1000); 
   ao(); 
    
   printf("moves motors 2\n"); 
   motor(0,59); 
   motor(3,50); 
   msleep(1500); 
   ao();
   printf("drops servo position\n"); 
   enable_servo(0); 
   set_servo_position(0,2001); 
   msleep(1000);
   ao();       
          
         
    return 0;
}
