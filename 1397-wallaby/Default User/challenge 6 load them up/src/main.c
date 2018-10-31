# include <kipr/botball.h>
// in the middle
int main()
{
    
    enable_servos();
    set_servo_position(1,1222);
    set_servo_position(2,1630);
   
    printf("go straight\n");
    motor(0,50);
    motor(3,55);
    msleep(6000);
    
    printf("turn\n");
    motor(0,-50);
    motor(3,50);
    msleep(390);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,55);
    msleep(2000);
    
    printf("go straight\n");
    motor(0,-50);
    motor(3,-55);
    msleep(2000);
    
    
    printf("Hello World\n");
    return 0;
}