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
    motor(3,20);
    motor(0,-20);
    msleep(1000);
    
      printf("go backwards\n");
    motor(0,-63);
    motor(3,-60);
    msleep(3000);

    
    
    
    return 0;
}
