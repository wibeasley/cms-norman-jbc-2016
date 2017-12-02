#include <kipr/botball.h>
//4 from the right
int main()
{
    printf("go forward\n");
    motor(0,53);
    motor(3,50);
    msleep(4000);
    
    printf("turn left\n");
    motor(0,30);
    motor(3,00);
    msleep(3000);
    
    printf("go forward\n");
    motor(0,53);
    motor(3,50);
    msleep(2500);
    
    printf("turn left\n");
    motor(0,30);
    motor(3,00);
    msleep(3200);
    
    printf("go forward\n");
    motor(0,53);
    motor(3,50);
    msleep(3000);
    
    printf("turn left\n");
    motor(0,30);
    motor(3,00);
    msleep(3500);
    
    printf("go forward\n");
    motor(0,53);
    motor(3,50);
    msleep(2500);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,00);
    msleep(1000);
    
    printf("go forward\n");
    motor(0,53);
    motor(3,50);
    msleep(2500);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,00);
    msleep(4500);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1500);
    
    motor(3,-50);
    motor(0,00);
    msleep(600);
    
    printf("go backward\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1500);
    
    return 0;
}
