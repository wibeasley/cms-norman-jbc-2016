#include <kipr/botball.h>

int main()
{
    printf("Tag You're it\n");//rint tag you,re it
  motor(0,20);
  motor(3,20);
  msleep(15000);
   motor(0,-20);
    motor(3,-20);
    msleep(15000);
    ao();
    return 0; //ends program
}