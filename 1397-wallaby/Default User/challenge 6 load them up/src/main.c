# include <kipr/botball.h>
// in the middle
int main()
{
    
    enable_servos();
    set_servo_position(1,1222);
    set_servo_position(2,1630);
   
    printf("go straight\n");
    motor(0,40);
    motor(3,40);
    msleep(2900);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1400);
    
    printf("turn\n");
    motor(3,-10);
    motor(0,60);
    msleep(600);
    
    printf("go straight\n");
    motor(0,30);
    motor(3,30);
    msleep(1600);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);
    
    printf("turn\n");
    motor(0,-10);
    motor(3,60);
    msleep(650);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(4000);
    
    motor(0,00);
    motor(5,00);
    msleep(100);
    
    set_servo_position(2,800);
    
    
    motor(0,00);
    motor(5,00);
    msleep(100);
    
    motor(0,00);
    motor(3,00);
    msleep(500);
    
    
    motor(0,-48);
    motor(3,-48);
    msleep(1900);
    
    motor(0,00);
    motor(3,00);
    msleep(250);
    
    
    set_servo_position(2,1466);
    msleep(1000);
    
    
    motor(0,-30);
    motor(3,-30);
    msleep(1500);
    
    
   motor(0,-10);
   motor(3,60);
   msleep(600);
    
   set_servo_position(1,300);
    
    motor(0,00);
    motor(3,00);
    msleep(250);
    
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
    set_servo_position(1,1222);
    set_servo_position(2,1630);
    
    motor(0,00);
    motor(3,00);
    msleep(250);
    
    motor(0,50);
    motor(3,50);
    msleep(1500);
    
     ao();
    
    
    printf("Hello World\n");
    return 0;
}