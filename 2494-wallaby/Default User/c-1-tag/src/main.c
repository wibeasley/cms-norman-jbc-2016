#include <kipr/botball.h>

int main()
{

    
printf("go forward/n");
motor(0,28);
motor(3,28);
msleep(10000);   
    
printf("turn right/n");
motor(3,60);
msleep(8000);  

printf("go forward/n");
motor(0,28);
motor(3,28);
msleep(10000); 
return 0;
}