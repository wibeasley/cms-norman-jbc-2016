#include <kipr/botball.h>

int main()
{
    printf("going straight\n");
    motor(0,70);//motor 0 running 70%                                                                                                  
    motor(3,70);//motor 3 running 70%
    msleep(5000);//motor 0 and 3 running 7 seconds
   
     printf("turn left\n");
    motor(0,50);//motor 0 running 50%
    motor(3,0);//motor 2 running 0%
    msleep(2000);//motor 0 and 3 running 2 seconds
   
    printf( "going straight\n");
    motor(0,50);//motor 0 running 50%
    motor(3,50);//motor 3 running 50%
    msleep(900);//motor 0 and 3 running 2 seconds
    
    motor (0,30);
    motor (3,0);
    msleep (2500);
    motor (0,30); 
    motor (3,30);
    msleep (1500);
    
    
    
    
    
    
   
    
    return 0;
}
