#include <kipr/botball.h>

int main()
{
    printf("go strait\n");
    motor(0,63);
    motor(3,60);
    msleep(2000);
    
     printf("backward\n");
    motor(0,-63);
    motor(3,-60);
    msleep(2000);
  
    printf("turn left/n");
    motor(0,00);
    motor(3,-60);
    msleep(1000);
    
     printf("go strait\n");
    motor(0,63);
    motor(3,60);
    msleep(3000);
   
     printf("turn left/n");
    motor(0,-60);
    motor(3,00);
    msleep(1000);
    
     printf("go strait\n");
    motor(0,60);
    motor(3,63);
    msleep(4000);
   
     printf("turn right/n");
    motor(0,00);
    motor(3,60);
    msleep(500);
   
       printf("go strait\n");
    motor(0,60);
    motor(3,65);
    msleep(2000);
   
        printf("go reverse\n");
    motor(0,-60);
    motor(3,-65);
    msleep(1000);
  
    printf("turn right\n");
    motor(0,50);
    motor(3,00);
    msleep(500);
    
    printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(3000);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,00);
    msleep(2500);
   
    printf("go strait\n"); 
    motor(0,60);
    motor(3,60);
    msleep(1000);
    
    printf("turn left\n");
    motor(0,50);
    motor(3,00);
    msleep(1500);
    
    printf("go strait\n");
    motor(0,60);
    motor(3,60);
    msleep(1000);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
