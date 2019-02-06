#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
   
    motor(0,50);   
    motor(3,50);
    msleep(2000);
    
    printf("STOP AT ALL TIMES OR ELSE...\n");
    motor(0,00);
    motor(3,00);
    msleep(1000);
    
        enable_servos();
    set_servo_position(0,195);
    set_servo_position(3,154);
     msleep(2000);
   
    
   return 0;
}
