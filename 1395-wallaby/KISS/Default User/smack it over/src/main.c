#include <kipr/botball.h>

int main()
{
    printf("go strait\n");
    motor(0,62);
    motor(3,60);
    msleep(7000);
    
    printf("turn\n");
    motor(0,100);
    motor(3,-100);
    msleep(3000);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
