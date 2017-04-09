#include <kipr/botball.h>
//2 square
int main()
{
  motor (0,95);
  motor (3,95);
  msleep (2500);
  motor (0,95);
  motor (3,50);
  msleep (4000);
  motor (0,95);
  motor (3,95);
  msleep (2500);
  ao();
    return 0;
}
