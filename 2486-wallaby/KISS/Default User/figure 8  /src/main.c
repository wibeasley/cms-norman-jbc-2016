
#include <kipr/botball.h>
int main()//line up the black thing with 0(black line)B 2 line
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

printf("turn right/n");
motor(3,40);
motor(0,30);
msleep(2000);    
    
printf("turn right/n");
motor(3,40);
motor(0,48);
msleep(3000);
    
return 0;    
}   
    
    
    
    
    
    