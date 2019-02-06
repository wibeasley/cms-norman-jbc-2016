
#include <kipr/botball.h>
int main()
{
printf("Go Straight\n");
motor(3,35); 
motor(0,40); 
msleep(5000);    
    
printf("Go Right\n");
motor(3,35);
motor(0,33); 
msleep(6000);          
  
printf("go left/n");
motor(3,40);
motor(0,70);
msleep(3000);
    
printf("go left/n");
motor(3,37);
motor(0,80);
msleep(12000);

printf("go straight\n");
motor(3,60);
motor(0,60);
msleep(5000);    

printf("turn left/n");
motor(3,50);
motor(0,60);
msleep(2000);    
    
printf("turn right/n");
motor(3,46);
motor(0,40);
msleep(3500);
    
return 0;    
}   
    
    
    
    
    
    