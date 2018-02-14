#include <kipr/botball.h>
// One Can Finished
int main()
{
    printf("Go Foward\n");
    motor(0,52);
    motor(3,50);
    msleep(4500);
    ao();
    
    printf("Turn Left\n");
    motor(0,52);
    msleep(2000);
    ao();
    
    printf("Go Foward\n");
    motor(0,52);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("Turn Left\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("Turn Left\n");
    motor(0,50);
    msleep(2000);
    ao();
    
    printf("Go Foward\n");
    motor(0,50);
    motor(3,50);
    msleep(1500);
    ao();
    
    printf("8 by 5\n");
    printf("Hello World\n");
    return 0;
}
