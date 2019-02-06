# include <kipr/botball.h>
// on the r
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
    msleep(420);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,55);
    msleep(2000);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-55);
    msleep(2200);
    
    printf("turn\n");
    motor(0,30);
    motor(3,-30);
    msleep(900);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,55);
    msleep(2000);
    
    set_servo_position(2,830);
    msleep(960);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-55);
    msleep(3000);
    
    motor(0,0);
    motor(3,0);
    msleep(60);
    
    set_servo_position(2,1630); 
    msleep(960);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-55);
    msleep(5000);
    
    printf("turn\n");
    motor(0,20);
    motor(3,55);
    msleep(6000);
    
    set_servo_position(2,830);
    msleep(960);

    
    printf("Hello World\n");
    return 0;
}