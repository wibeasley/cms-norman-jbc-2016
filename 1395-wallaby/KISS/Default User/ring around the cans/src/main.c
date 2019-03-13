#include <kipr/botball.h>

int main()
{
    printf("go straght\n");
    motor(0,62);
    motor(3,60);
    msleep(9000);
    
    printf("turn right\n");
    motor(0,-20);
    motor(3,20);
    msleep(2000);
    
    
    
     printf("go straght\n");
    motor(0,62);
    motor(3,60);
    msleep(5000);
    
    
     printf("turn right\n");
    motor(0,-20);
    motor(3,20);
    msleep(2000);
    
    
    printf("go straght\n");
    motor(0,62);
    motor(3,60);
    msleep(9000);
   
    
    
    return 0;
}
