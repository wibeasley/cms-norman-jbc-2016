#include <kipr/botball.h>

int main()
{
    printf("precision parking\n");
 
  motor(0,91); // motor in port 0 at 91% 
  motor(3,100); // motor in port 3 at 100%
  msleep(3000); // pause for 3 seconds
  
  motor(0,66); // motor in port 0 at 35% 
  motor(3,100); // motor in port 3 at 100%
  msleep(1200); // pause for 2.2 seconds
  
  ao(); // all off
  return 0; 
}
