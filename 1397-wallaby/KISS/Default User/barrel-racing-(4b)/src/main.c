#include <kipr/botball.h>

int main()
    

    
   
    motor(0,52);
    motor(3,50);
    msleep(5000);
    
    printf("turn\n");
    motor(3,50);
    motor(0,27);
    msleep(1500);
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(4000);
    
    printf("turn\n");
    motor(0,50);
    motor(3,-10);
    msleep(1500);
    
    printf("go straight\n");
    motor(0,52);
    motor(3,50);
    msleep(5000);
    
  
    
    return 0;
}
