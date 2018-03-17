#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
    

motor(0,50);//go forward
motor(3,50);//go forward    
msleep(6000);//go forward for 6 seconds    
motor(3,40);//turn right     
motor(0,20);//turn right      
msleep(17000);//turn right for 17 seconds  
motor(3,40);//go forward 
motor(0,40);//go forward    
msleep(2000);//go forward for 2 seconds      
motor(0,40)    
}                   
    