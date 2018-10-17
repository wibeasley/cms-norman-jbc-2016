#include <kipr/botball.h>

int main(){
    
printf("Hello World\n");
    
motor(0,50);
motor(3,50);
msleep(5000);

motor(0,20);
motor(3,20);
msleep(1000); 

motor(0,-40);
motor(3,-40);
msleep(3000);

motor(3,0);    
motor(0,30);
msleep(4000);

motor(0,40);    
motor(3,40);
msleep(3000);

motor(3,40);
motor(0,0);
msleep(3000);
    
return 0;
   
}





