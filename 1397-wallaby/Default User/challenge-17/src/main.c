#include <kipr/botball.h>

int main()
{
    enable_servos();
    set_servo_position(1,1430);
    set_servo_position(2,753);
    msleep(200);
        
    
    
    
  printf("StartWhileLoop\n");

    while (analog (5)<=1800)
    msleep (10); {
     if (analog (1)>=3600)
        
           motor(0,20);
           motor(3,0);
    
          
 
        
      else 
          motor(0,0);
          motor(3,20);
     
            
    }    

    printf("Hello World\n");
    return 0;
}
