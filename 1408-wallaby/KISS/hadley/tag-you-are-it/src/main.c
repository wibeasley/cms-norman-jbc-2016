#include <kipr/botball.h>

int main()
{
    printf("Move forward\n");
    motor(0,45);
    motor(3,34);
    msleep(5000);
    
    printf("Move backwards\n");
    motor(0,-45);
    motor(3,-34);
    msleep(5000);
           
    
    
    
    printf("Finish\n");
    return 0;
    
}
