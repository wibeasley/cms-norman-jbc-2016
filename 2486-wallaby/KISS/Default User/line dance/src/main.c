#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    
 printf("go stright\n"); 
 motor(0,50);   
 motor(3,50);   
 msleep(5000);   
    
 printf("go backwards\n");   
 motor(0,-50);   
 motor(3,-50);   
 msleep(5000);   
    
    
 printf("go stright\n"); 
 motor(0,50);   
 motor(3,50);   
 msleep(5000);       
    
 printf("go backwards\n");   
 motor(0,-50);   
 motor(3,-50);   
 msleep(5000);   
    
 printf("go stright\n"); 
 motor(0,50);   
 motor(3,50);   
 msleep(5000);          
    
 printf("go backwards\n");   
 motor(0,-50);   
 motor(3,-50);   
 msleep(5000);             
          
  printf("go stright\n"); 
 motor(0,50);   
 motor(3,50);   
 msleep(5000);             
    
 printf("go backwards\n");   
 motor(0,-50);   
 motor(3,-50);   
 msleep(5000);          
    
 printf("go stright\n"); 
 motor(0,50);   
 motor(3,50);   
 msleep(5000);            
       
  printf("go backwards\n");   
 motor(0,-50);   
 motor(3,-50);   
 msleep(3000);             
    
 enable_servos();   
 set_servo_position(0,0);
 msleep(2000);   
 disable_servos ();  
    
    
 enable_servos();   
 set_servo_position(0,1376); 
 msleep(2000);   
 disable_servos ();
     
  enable_servos();    
 set_servo_position(0,0);
 msleep(2000);   
 disable_servos ();       
     
  enable_servos();   
 set_servo_position(0,1376);   
 msleep(2000);
 disable_servos();
      
 enable_servos();   
 set_servo_position(0,0);   
 msleep(2000);           
 disable_servos();
     
  enable_servos();   
 set_servo_position(0,1376);
 msleep(2000);   
 disable_servos();         
     
 printf("turn left\n");    
 motor(0,40);     
 motor(3,30);    
 msleep(2000);    
     
 printf("turn right\n");    
 motor(0,30);     
 motor(3,40);    
 msleep(2000);    
    
 printf("turn left\n");    
 motor(0,40);     
 motor(3,30);    
 msleep(2000);    
     
 printf("turn right\n");    
 motor(0,30);     
 motor(3,40);    
 msleep(2000);    
     
 printf("turn left\n");    
 motor(0,40);     
 motor(3,30);    
 msleep(2000);    
     
 printf("turn right\n");    
 motor(0,30);     
 motor(3,40);    
 msleep(2000);    
     
 printf("turn left\n");    
 motor(0,40);     
 motor(3,30);    
 msleep(2000);    
     
 printf("turn right\n");    
 motor(0,30);     
 motor(3,40);    
 msleep(2000);    
     
 printf("turn left\n");    
 motor(0,40);     
 motor(3,30);    
 msleep(2000);    
     
 printf("turn right\n");    
 motor(0,30);     
 motor(3,40);    
 msleep(2000);    
     
 printf("turn right\n");    
 motor(0,30);    
 motor(3,40);    
 msleep(10000);    
     
  printf("turn left\n");    
 motor(0,40);     
 motor(3,30);    
 msleep(10000);    
    
     
     
     
     
     
     
     
     
     
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    return 0;
}
