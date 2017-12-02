#include <kipr/botball.h>

int main()
{
    printf("go forward/n");
    motor(0,30);
motor(3,30);
    msleep(10000);
printf("turn/n");
    motor(0,10);
 motor(3,30);   
msleep(12000);    
printf("go forward/n");
    motor(0,30);
    motor(0,30);
    msleep(10000);
          
    
    return 0;
}
