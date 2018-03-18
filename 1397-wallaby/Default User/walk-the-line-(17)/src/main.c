#include <kipr/botball.h>

int main()
{
    
    
    printf("go forward\n");
    int step_count = 0;
    while (analog(0)<=2750) {
        step_count = step_count +1;
        motor(0,12);
        msleep(100);    
    }    
    printf("step_count: %i\n ", step_count);
    
    printf("go backward\n");
    motor(0,-10);
    motor(3,-10);
    msleep(step_count * 100);
    




    return 0;
}
