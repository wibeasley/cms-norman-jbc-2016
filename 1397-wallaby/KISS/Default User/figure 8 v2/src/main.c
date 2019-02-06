#include <kipr/botball.h>
typedef enum { false, true} bool; 
int straight ( int power, double seconds, bool taper ) {
    printf(" move at %i power for %f seconds.\n ",power, seconds);
    
    int power_left = power * 1.0;
    int power_right = power * .90;
    


    motor(0, power_left);
    motor(3,power_right);
    msleep( seconds*1000);
    
    return 0;
}

int rotate ( int power, double seconds, bool taper) {
    printf(" move at %i power for %f seconds.\n ", power, seconds);
    
    motor(0,50);
    motor(3,00);
    msleep( seconds*1000);
    
    return 0;
}
int main()
{
    printf("Hello World\n");
    
    straight( 20, 2, true);
    straight( 30, 6, true);
    rotate(20, 8, true);
  
    return 0;
}
