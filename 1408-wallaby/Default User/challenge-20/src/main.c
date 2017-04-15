#include <kipr/botball.h>

int main()
{
enable_servos(1);
enable_servos(0);
      set_servo_position(0,1618);
  set_servo_position(1,1941);
    
    motor(3,50);
    motor(0,50);
    msleep(6500);
    ao();
    
    set_servo_position(0,822);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(2500);
    ao();
    
    motor(3,50);
    msleep(800);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    ao();
    
    motor(3,50);
    msleep(1000);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    motor(3,50);
    msleep(1500);
    ao();
    
     set_servo_position(1,1120);
    msleep(1000);
    
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
     set_servo_position(1,1816);
    msleep(1000);
    
    set_servo_position(0,1614);
    msleep(1000);
    
        motor(3,-50);
    motor(0,-50);
    msleep(500);
    ao();
    
    motor(0,-50);
    msleep(1400);
    ao();
    

    
    motor(0,50);
    motor(3,50);
    msleep(1300);
    ao();
    
        set_servo_position(0,822);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1500);
    ao();
    
    motor(0,50);
    msleep(500);
    ao();
    
         set_servo_position(1,1213);
    msleep(1000);
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    ao();
    
    printf("Hello World\n");
    return 0;
}
