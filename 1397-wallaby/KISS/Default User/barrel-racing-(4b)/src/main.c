#include <kipr/botball.h>

int main()
    while (analog (0) >3800)
    {
        motor(0,20);
        motor(3,0);
        msleep(200);
    }
        
{
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(4500);
    
    printf("turn\n");
    motor(3,50);
    motor(0,27);
    msleep(10050);
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(3200);
    
    printf("turn\n");
    motor(0,50);
    motor(3,-10);
    msleep(1750);
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(2100);
    
    printf("turn\n");
    motor(0,50);
    motor(3,-10);
    msleep(1950);
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(2500);
    
    
    return 0;
}
