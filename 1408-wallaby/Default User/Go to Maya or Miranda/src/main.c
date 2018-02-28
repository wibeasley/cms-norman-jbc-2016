#include <kipr/botball.h>

int main()
{
    while (analog(0)<=2700) { 
        motor(0,50);
        motor(3,50);}
    printf("Hello World\n");
    return 0;
}
