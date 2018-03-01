 #include <kipr/botball.h>
//4 down nine to the left
int main()
{
    printf("Hello World\n");
    motor(0,55);
    motor(3,50);
    msleep(7000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1700);
    return 0;
          }
