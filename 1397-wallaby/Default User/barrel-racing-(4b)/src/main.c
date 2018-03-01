#include <kipr/botball.h>
//8 from the right
int main()
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
    msleep(2300);
    
    printf("turn\n");
    motor(0,50);
    motor(3,-10);
    msleep(1700);
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(2300);
    
    
    return 0;
}
