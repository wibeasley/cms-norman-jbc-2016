#include <kipr/botball.h>

int main()
{
    printf("go forward");
    motor(0,20);
    motor(3,20);
    msleep(6000);      
    printf("go forward");
    motor(0,20);
    motor(3,20);
    msleep(9000);
        motor(0,-29);
    motor(3,-29);
    msleep(9000);
    return 0;
    printf("go forward");
    
}
