
#include <kipr/botball.h>
//2 from the s and down
int main()
{
    enable_servos();
    set_servo_position(1,1458);
    msleep(800);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(4900);
    
    set_servo_position(1,2047);
    msleep(800);
    
    set_servo_position(1,1458);
    msleep(800);
    
    printf("turn right\n");
    motor(3,50);
    motor(0,-10);
    msleep(1000);
    
    printf("go back\n");
    motor(0,-20);
    motor(3,-20);
    msleep(800);
    
    set_servo_position(1,2047);
    msleep(800);

    set_servo_position(1,1458);
    msleep(800);
    
    printf("turn\n");
    motor(3,50);
    motor(0,-10);
    msleep(1200);
    
    
    printf("go straight\n");
    motor(0,30);
    motor(3,30);
    msleep(100);
   
    set_servo_position(1,2047);
    msleep(800);
    
    set_servo_position(1,1458);
    msleep(800);
     
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(5500);
    
    
    return 0;
}
