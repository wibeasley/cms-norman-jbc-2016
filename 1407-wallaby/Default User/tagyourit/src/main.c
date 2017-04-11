#include <kipr/botball.h>

int main()
{
  motor(0,80);
  motor(3,80);
  msleep(3433);
  motor(0,-80);
  motor(3,-80);
  msleep(3432);
  return 0;
}
