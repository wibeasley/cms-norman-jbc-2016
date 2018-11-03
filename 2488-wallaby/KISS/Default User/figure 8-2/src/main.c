#include <kipr/botball.h>

int main()
{
    printf("figure eight -- version 2\n");

    printf("go straight\n");
	motor(0,40);
	motor(3,40);
	//(7000);
    //printf("
    msleep(1000);
    printf("turn right\n");
    motor(0,30);
    motor(3,40);
    msleep(1000);
printf("go straight\n");
    motor(0,50);
    motor(3,40);
    msleep(3000);
    printf("moves mortors right/n");
printf("turn left");
motor(0,300);
    motor(3,30);
    msleep(1000);
    printf("go straigt\n");
   motor(4,50);      
printf("go straigt\n");    
   motor(3,20);  
msleep(900);
printf("go straigt\n"); 
 motor(0,60);
motor(3,50); 
msleep(1000); 
printf("turn right");
motor(4,40);
motor(4,30);
msleep(1000);    
return(0);
}   
               