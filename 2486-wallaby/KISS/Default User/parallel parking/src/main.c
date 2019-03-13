#include <kipr/botball.h>

int main()//line up wheel 3 with Q
          //line up the black thing with line 1    
{
 printf("go straight\n");
 motor(0,54);      
 motor(3,54);        
 msleep(5000);         
          
 printf("go backwards\n");          
 motor(0,-54);          
 motor(3,-54);          
 msleep(5000);          
          
 printf("go straight\n");
 motor(0,54);   
 motor(3,54);   
 msleep(6000);   
    
 printf("stop\n");
 motor(0,0);   
 motor(3,0);   
 msleep(1000);
 
 printf("turn right\n");
 motor(0,30);
 motor(3,62);    
 msleep(2000);
    
 printf("turn right\n");
 motor(0,-30);   
 motor(3,-61);   
 msleep(2000);
    
 printf("go backwards\n");    
 motor(0,-54);
 motor(3,-54);   
 msleep(6000);
    
return 0;    
    
}
