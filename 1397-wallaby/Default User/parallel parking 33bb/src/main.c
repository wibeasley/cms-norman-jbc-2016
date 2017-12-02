 #include <kipr/botball.h>
//4 down nine to the left
int main()
{
    printf("Hello World\n");
    motor(0,50);
    motor(3,50);
    msleep(9000);
    
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    return 0;
          }
