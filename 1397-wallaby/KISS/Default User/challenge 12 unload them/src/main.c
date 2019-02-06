#include <kipr/botball.h>
int m(int motor0, int motor3, int duration){
    motor(0,motor0);
    motor(3,motor3);
    msleep(duration);
}
int main()
{
    enable_servos();
    set_servo_position(1,1146);//parrallel to the ground
    msleep(800);
    set_servo_position(2,1281);//open claw
    msleep(800);
    
    printf("Hello World\n");
    m(50, 53, 4000);
    return 0;
}
