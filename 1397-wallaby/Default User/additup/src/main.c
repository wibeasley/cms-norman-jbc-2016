
#include <kipr/botball.h>
// 6 from t
// we finished
int main()
{
    enable_servos();
    set_servo_position(1,800);
    msleep(800);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(7000);
    
    motor(0,0);
    motor(3,00);
    msleep(200);
    
    set_servo_position(1,1458);
    msleep(800);
    
    set_servo_position(1,642);
    msleep(800);

    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(2100);
    
    motor(0,0);
    motor(3,00);
    msleep(200);
    
    set_servo_position(1,1458);
    msleep(800);

    set_servo_position(1,642);
    msleep(800);
    
    printf("go straight\n");
    motor(0,-50);
    motor(3,-50);
    msleep(9100);
      
    return 0;
}
