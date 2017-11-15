#include <kipr/botball.h>
//3 from left
//challenge eight 
int main()
{
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);

    printf("turn\n");
    motor(0,-10);
    motor(3,50);
    msleep(2000);
    
    printf("go straight\n");
    motor(3,50);
    motor(0,50);
    msleep(2800);
    
    printf("turn\n");
    motor(0,50);
    motor(3,-20);
    msleep(1950);
    
    printf("go straight\n");
    motor(3,50);
    motor(0,60);
    msleep(2500);
    
    printf("turn\n");
    motor(0,50);
    motor(3,-20);
    msleep(811);
    
    printf("go straight\n");
    motor(3,50);
    motor(0,50);
    msleep(1000);
    
    printf("go straight\n");
    motor(3,50);
    motor(0,50);
    msleep(1300);
    
    motor(0,-15);
    motor(3,50);
    msleep(3000);
    
    return 0;
}
