#include <kipr/botball.h>



int main()
{   printf("set servo position\n");
    enable_servos();
    set_servo_position(1,1111);
    set_servo_position(2,753);
    msleep(200);
        
    
    
    
  printf("StartWhileLoop\n");

    while (analog (1)<=1800)
    { msleep(10);
     if (analog (5)>=3850)
         {
           motor(0,20);
           motor(3,0);}
         
          else 
          {
          motor(0,0);
          motor(3,20);}
       
            
    }    

    ao (); 
    return 0;
}
