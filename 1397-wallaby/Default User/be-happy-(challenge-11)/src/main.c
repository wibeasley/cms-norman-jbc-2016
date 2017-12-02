#include <kipr/botball.h>
//7 from the left,on the cross
int main()
{
    
    enable_servos();
    set_servo_position(1,1370);
    
    
    
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    set_servo_position(1,1847);
    
    printf("turn\n");
    motor(0,-25);
    motor(3,00);
    msleep(1500);
    
    set_servo_position(1,1370);
    
    printf("go back\n");
    motor(0,-50);
    motor(3,-50);
    msleep(300);
    
    set_servo_position(1,1847);
    msleep(500);
    
    printf("go back\n");
    motor(0,-30);
    motor(3,-30);
    msleep(400);
    
    printf("stop\n");
    motor(0,00);
    motor(3,00);
    msleep(00);
    
    set_servo_position(1,1370);
    msleep(200);
    
    printf("turn\n");
    motor(0,50);
    motor(3,00);
    msleep(200);
    
    printf("stop\n");
    motor(0,00);
    motor(3,00);
    msleep(000);
    
    set_servo_position(1,1847);
    msleep(200);
    
    
    printf("go back\n");
    motor(0,-30);
    motor(3,-30);
    msleep(100);
      
    set_servo_position(1,1370);  
    
    
   
    
    
    return 0;
}
