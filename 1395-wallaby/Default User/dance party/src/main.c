#include <kipr/botball.h>

int main()
{
    printf("Dance Party\n");
    
   printf("gooing forward1\n");
   motor(0,50);
    motor(3,50);
    msleep(3000);
    
    printf("turning1\n");
    motor(0,50);
    motor(3,00);
    msleep(8000);
    
    printf("going forward 2\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    printf("turning 2\n");   
    motor(1,50);
    motor(0,00);
    msleep(8000);
    
    enable_servos();
    set_servo_position(0, 991);
    set_servo_position(0, 148);
    
    motor(1,50);
    motor(0,50);
    msleep(-3000);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
