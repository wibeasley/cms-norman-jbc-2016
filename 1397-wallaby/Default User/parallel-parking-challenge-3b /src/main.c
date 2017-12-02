#include <kipr/botball.h>
//4 from the right
int main()
{
    printf("Hello World\n");
  //motor(0,50);
  //motor(3,50);
  //msleep(5000);
  
  motor(0,55);
  motor(3,50);
  msleep(6000);
  
  motor(0,-54);
  motor(3,-50);
  msleep(2500);
  
  //motor(0,85);
  //motor(3,30);
  //msleep(3000);
  
  //motor(0,50);
  //motor(3,50);
  //msleep(800);
  ao();
    return 0;
}
