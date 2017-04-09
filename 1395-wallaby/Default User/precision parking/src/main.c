#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    motor(0,50);
   motor(3,50);
    msleep(7500);   
   motor(0,50);    
   motor(3,0);
    msleep(1500); 
    return 0;
}
