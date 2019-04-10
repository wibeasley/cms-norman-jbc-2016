#include <kipr/botball.h>

int main()
{
    printf("go strait\n");
    motor(0,63);
    motor(3,60);
    msleep(2000);
    
      printf("go backwards\n");
    motor(0,-63);
    motor(3,-60);
    msleep(2000);
  
    printf("turn left/n"); 
    motor(3,-20);
    motor(0,20);
    msleep(500);
    
      printf("go backwards\n");
    motor(0,63);
    motor(3,60);
    msleep(3000);
    
    motor(3,20);
    motor(0,-20);
    msleep(1200);
    
   motor(3,-20);
    motor(0,20);
    msleep(1000); 
    
    motor(3,40);
    motor(0,20);
    msleep(4500);
    
    motor(3,20);
    motor(0,20);
    msleep(2500);
    
    motor(0,-20);
    motor(3,20);
    msleep(2250);
   
    motor(0,-62);
    motor(3,-60);
   motor(3,40);;
    
    motor(3,40);
    motor(0,20);
    msleep(2000);
    
     motor(0,40);
    motor(3,20);
    msleep(1500);
    motor(3,40);
    motor(0,40);
   msleep(4500);
    
    return 0;
}
