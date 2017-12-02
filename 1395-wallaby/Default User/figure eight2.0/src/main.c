#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    printf("go forward/n");
  motor(0,50);
    motor(3,59);
    msleep(4000);
    
    printf("turn/n");
    motor(3,50);
    motor(0,0);
    msleep(1000);
    
    printf("turn/n");
   motor(3,50);
    motor(0,0);
    msleep(1000);
    
    printf("turn/n");
    motor(0,50);
    motor(3,0);
    msleep(2050);
    
    printf("go forward");
    motor(0,50);
    motor(3,50);
    msleep(3000);
    
    printf("turn/n");
    motor(0,50);
    motor(3,00);
    msleep(2000);
    
    printf("go forward/n");
   motor(0,50);
    motor(3,50);
    msleep(3000);
    
    printf("turn/n");
    motor(3,0);
    motor(0,50);
    msleep(2000);
    
    printf("go forwad/n");
        motor(3,50);
    motor(0,50);
    msleep(4000);
    
    printf("turn/n");
    motor(3,50);
    motor(0,0);
    msleep(2000);
    
    
    motor(0,50);
    motor(3,50);
    msleep(6000);
    return 0;
}
