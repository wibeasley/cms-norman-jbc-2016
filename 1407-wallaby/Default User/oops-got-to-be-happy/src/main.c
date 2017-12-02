#include <kipr/botball.h>

int main()
{
    printf("moves motors 1\n");
    motor(0,54);
    motor(3,50);
    msleep(1000);
    
    printf("turns motors 1\n");
    motor(0,54);
    motor(3,25);
    msleep(2000);
    ao();
    
    printf("rises servos 1\n");
    enable_servos(0);
    set_servo_position(0,1731);
    msleep(2000);
    disable_servos(0);
    ao();
    
    printf("turns motors 2\n"); 
    motor(0,25);
    motor(3,54);
    msleep(1000);
    ao();
    
    printf("lowers servos 1\n");
    enable_servos(0);
    set_servo_position(0,781);
    msleep(2000);
    disable_servos(0);
    ao();
    
    printf("lifts servos 1\n");
    enable_servos(0);
    set_servo_position(0,900);
    msleep(2000);
    disable_servos(0);
    ao();
    
    
    printf("moves motors 2\n");
    motor(0,-54);
    motor(3,-50);
    msleep(500);
    ao();
    
    printf("lowers servos 2\n");
    enable_servos(0);
    set_servo_position(0,1608);
    msleep(2000);
    disable_servos(0);
    ao();
    
    printf("lifts servos 2\n");
    enable_servos(0);
    set_servo_position(0,360);
    msleep(2000); 
    disable_servos(0);
    ao();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
    
}
