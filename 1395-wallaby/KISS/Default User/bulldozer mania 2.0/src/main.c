#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,40);
    motor(3,40);
    msleep(5600);
    
    motor(3,40);
    motor(0,00);
    msleep(4000);
  
    
    motor(3,40);
    motor(0,40);
    msleep(6000);
    
    
    
    
    return 0;
}
