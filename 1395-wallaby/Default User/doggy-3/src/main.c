#include <kipr/botball.h>

int main()
{
    printf("ring around the can\n");

  motor(0,91); // motor in port 0 at 91% 
  motor(3,100); // motor in port 3 at 100%
  msleep(3000); // pause for 3 seconds
  
  motor(0,35); // motor in port 0 at 35% 
  motor(3,100); // motor in port 3 at 100%
  msleep(2500); // pause for 3 seconds
  
  motor(0,91); // motor in port 0 at 91% 
  motor(3,100); // motor in port 3 at 100%
  msleep(3000); // pause for 3 seconds
  ao(); // all off
  return 0; 
}
