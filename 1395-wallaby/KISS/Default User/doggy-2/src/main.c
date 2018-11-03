#include <kipr/botball.h>

int main()
{
    printf("Sarah Robot Move!\n");

  motor(0,91); // motor in port 0 at 100% 
  motor(3,100); // motor in port 3 at 100%
  msleep(3000); // pause for 3 seconds
  motor(0,-91); // motor in port 0 at 100% 
  motor(3,-100); // motor in port 3 at 100%
  msleep(3000); // pause for 3 seconds
  ao(); // all off
  return 0; 
   
   
}
