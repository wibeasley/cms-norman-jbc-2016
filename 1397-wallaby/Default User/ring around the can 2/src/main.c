#include <kipr/botball.h>

const float motor_calibration = 1.0;
//4 squares from the right
int main()
{
    motor (0,35);
    motor (3,35 * motor_calibration);
    msleep (7580);

    motor (0,65);
    motor (3,30 * motor_calibration);
    msleep (5000);  

    motor (0,75);
    motor (3,55 * motor_calibration);
    msleep (3500);

    motor(0,50);
    motor(3,50 * motor_calibration);
    msleep(1900);
          
    ao();
    return 0;
}
