#include <kipr/botball.h>
//3 from  the "T", bottom left corner
int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
   printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(800);

    motor(0,00);
    motor(3,00);
    msleep(300);

    set_servo_position(2,824);
    msleep(800);
    set_servo_position(1,700);
    msleep(800);

    motor(0,-50);
    motor(3,-50);
    msleep(800);

    motor(0,50);
    motor(3,00);
    msleep(1800);

    motor(0,-50);
    motor(3,-50);
    msleep(300);

    motor(0,00);
    motor(3,00);
    msleep(300);

    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);

    motor(0,-50);
    motor(3,-50);
    msleep(800);

    motor(3,30);
    motor(0,00);
    msleep(3100);

    motor(0,50);
    motor(3,50);
    msleep(300);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    

    set_servo_position(2,824);
    msleep(800);
    set_servo_position(1,700);
    msleep(800);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    motor(0,00);
    motor(3,50);
    msleep(2200);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1000);
    
    motor(3,00);
    motor(0,50);
    msleep(2400);
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(2,824);
    msleep(800);
    set_servo_position(1,700);
    msleep(800);
    
    motor(0,-50);
    motor(3,-50);
    msleep(4000);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(1,1722);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);

    return 0;
}
