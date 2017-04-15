#include <kipr/botball.h>

int main()
{
    motor(0,50);
    motor(3,50);
    msleep(3500);
    ao();
    
    motor(3,50);
    msleep(2000);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    motor(0,50);
    msleep(2500);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(3000);
    ao();
    
    motor(0,50);
    msleep(2000);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(2000);
    ao();
    
    motor(0,50);
    msleep(2000);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(1000);
    ao();
    
    motor(0,50);
    msleep(1000);
    ao();
    
    motor(0,50);
    motor(3,50);
    msleep(3500);
    ao();
    
    motor(3,50);
    msleep(1500);
    ao();
    
    motor(3,50);
    motor(0,50);
    msleep(3000);
    ao();
    
    printf("Hello World\n");
    return 0;
}
