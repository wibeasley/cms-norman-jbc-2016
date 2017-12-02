#include <kipr/botball.h>

int main()
{
    if(analog(1)>=2000)
    {
     motor(3,50);
     motor(0,50);
     msleep(50);
    }    
    printf("Hello World\n");
    return 0;
}
