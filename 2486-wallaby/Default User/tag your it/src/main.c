#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
motor(0,40);//go farward
motor(3,40);//go farward
msleep(10000);//go farward for 8 seconds  
motor(0,-40);//go backwards    
motor(3,-40);//go backwards     
msleep(10000);//go backwards for 9 seconds
return 0;
}