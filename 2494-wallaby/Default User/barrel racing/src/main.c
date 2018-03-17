#include <kipr/botball.h>

int main()
{

    
printf("go forward\n");
motor(0,28);
motor(3,28);
msleep(12000);   
    
printf("turn right\n");
motor(0,18);
motor(3,60);     
msleep(7000);  

printf("go forward\n");
motor(0,28);
motor(3,28);
msleep(5000); 
return 0;
}
