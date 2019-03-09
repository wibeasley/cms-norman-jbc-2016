#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");



    enable_servos();
    set_servo_position(0,1389);
    set_servo_position(0,1566);
    msleep(500);

    printf("go straight\n");
    motor(0,40);
    motor(3,40);
    msleep(2000);

    printf("go right\n");
    motor(0,20);
    motor(3,45);
    msleep(3000);

    printf("go straight\n");
    motor(0,45);
    motor(3,45);
    msleep(5000);

    printf("go rigth\n");
    motor(0,45);
    motor(3,20);
    msleep(12000);

    printf("go straight\n");
    motor(0,45);
    motor(3,45);
    msleep(9500);













    return 0;   
}    



