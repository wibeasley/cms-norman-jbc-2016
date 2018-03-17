#include <kipr/botball.h>

int main()
{
    printf("Barrel Racing\n");
    
    printf("Go forward 6 seconds\n");
    motor(0,50);//go forward
    motor(3,50);//go forward    
    msleep(6000);//go forward for 6 seconds    

    printf(" turn right for 6 seconds\n");
    motor(3,40);//turn right     
    motor(0,20);//turn right      
    msleep(17000);//turn right for 17 seconds  
    
    printf("Go forward for 1 seconds\n");
    motor(3,40);//go forward 
    motor(0,40);//go forward    
    msleep(1000);//go forward for 2 seconds       
 
    //printf("turn left for 9 seconds\n");
    //motor(3,20);
    //motor(0,10);
    //msleep(20000);
    
    //motor(3,40);
    //motor(3,40);
    //msleep;
                   

  motor(3,40);//go forward; 
  motor(0,40);//go forward;
  msleep(3000);
return 0;
}

