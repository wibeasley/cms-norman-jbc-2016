#include <kipr/botball.h>

int main()
    
    
{  
    enable_servos();

    printf("Hello World\n");
    set_servos_positison(2,1307); 
    set_servos_positison(1,1360);
    motor(3,55);
    motor(0,-55);
    
    return 0;
}
