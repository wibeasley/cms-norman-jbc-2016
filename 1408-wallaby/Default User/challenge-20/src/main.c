#include <kipr/botball.h>

int main()
{
enable_servos(1);
enable_servos(0);
      set_servo_position(0,1618);
  set_servo_position(1,1630);
    
    motor(3,50);
    motor(0,50);
    msleep(6500);
    ao();
    
    set_servo_position(0,822);
    msleep(1000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(6500);
    ao();
    
    motor(3,50);
    msleep(1500);
    ao();
    
    set_servo_position(0,1618);
    msleep(1000);
    
    set_servo_position(1,961);
    msleep(1000);
    
    printf("Hello World\n");
    return 0;
}
