#include <kipr/botball.h>

int main()
{
    printf("go straight into green box\n");
    motor (0,60);
    motor (3,60);
    msleep(5000);
    
    printf("go backwards to start\n");
    motor (0,-40);
    motor (3,-40);
    msleep(6950);
    
    printf("go forwards\n");      
    motor (0,50);
    motor (3,50);
    msleep(2000);
    
    printf("turn\n");
    motor (0,1);
    motor (3,65);
    msleep(2000);
    
    printf("turn\n");
    motor (0,65);
    motor (3,1);
    msleep(1900);
    
    printf("go forward\n");
    motor (0,50);
    motor (3,50);
    msleep(3000);
    
    printf("turn\n");
    motor (3,1);
    motor (0,65);
    msleep(2000);
    
    printf("turn\n");
    motor (0,1);
    motor (3,65);
    msleep(2700);
    
    printf("go forwards");
    motor (0,35);
    motor (3,35);
    msleep(2300);
    
    printf("go backward\n");
    motor (0,-50);
    motor (3,-40);
    msleep(4000);
    
    printf("turn\n");
    motor (0,5);
    motor (3,45);
    msleep(3500);
    
    printf("go forward\n");
    motor (0,50);
    motor (3,50);
    msleep (7500);
	return 0;
}