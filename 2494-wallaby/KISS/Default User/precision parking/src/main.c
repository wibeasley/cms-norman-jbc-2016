#include <kipr/botball.h>

int main(){

    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(5000);

    motor(0,20);
    motor(3,20);
    msleep(1000); 

    motor(0,-40);
    motor(3,-40);
    msleep(4000);

    motor(3,0);    
    motor(0,30);
    msleep(5000);

    motor(0,40);    
    motor(3,40);
    msleep(3000);

    motor(3,40);
    motor(0,0);
    msleep(3000);

    motor(3,40);
    motor(0,40);
    msleep(9000);    

    motor(3,40);
    motor(0,0);
    msleep(4000);

    motor(3,40);
    motor(0,40);
    msleep(3000);
        
    motor(3,40);
    motor(0,0);
    msleep(3000);
    
    motor(3,40);
    motor(0,40);
    msleep(2000);
    
    motor(3,40);
    motor(0,40);
    msleep(2000);
    
    return 0;
   
 }