#include <kipr/botball.h>

int main()
{   
         printf("go straight\n");                                                                                                                                                                                                                                                  
    motor (0,60);                                                                                                                                                                                                                                                                                                                                                                   
    motor (3,60);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    msleep(500);
         printf("stop\n");
    motor (0,0);
    motor (3,0);
    msleep (1000);
         printf("open claw\n");
    enable_servos ();
    set_servo_position (2,1000);
    msleep(500);
    
         printf("arm down\n");
    enable_servos ();
    set_servo_position (3,1780);
    msleep(500);
         printf("close claw");
    enable_servos ();
    set_servo_position (2,418);
    msleep(500);
    
    motor (0,50);
    motor (3,50);
    msleep(1000);
         printf("close claw\n");
    enable_servos ();
    set_servo_position (2,460);
         printf("claw up\n");
    enable_servos ();
    set_servo_position (3,1040);
    msleep(500);
    motor (0,40);
    motor (3,40);
    msleep(3000);    
     return 0;                                                                                                                                                                                  
}                                                                               
