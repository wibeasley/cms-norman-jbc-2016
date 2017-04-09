#include <kipr/botball.h>

int main()
{
    printf("go forward\n");
    msleep(500);
    motor(0,50);
    motor(3,50);
    msleep(500);
    ao();
    
    printf("grab can\n");
    msleep(500);
    enable_servos(1);
    enable_servos(0);
    set_servos_position(0,1660);
    set_servos_position(1,);
    ao;
    
  motor(0,0);
    motor(3,50);
    msleep(1000);
  ao();
    
    set_servos_position(1,2020);
    set_servos_position(0,720);
    ao();
    
    motor(3,50);
    motor(0,0);
    msleep(500);
      ao();
    
    motor(3,50);
    motor(0,50);
    msleep(500);
    ao();
    
    motor(3,50);
    motor(0,0);
    msleep(500);
    ao();
    
    set_servos_position(0,1650);
    set_servos_position(3,);
    ao();
    
    motor(0,50);
    motor(3,0);
    msleep(1000);
    ao();h
    
   printf("Hello World\n");
    return 0;
}

