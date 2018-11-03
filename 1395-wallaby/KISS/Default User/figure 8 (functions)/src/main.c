#include <kipr/botball.h>

int main()
{
  int move (int speed_left, int speed_right, int duration) { 
  int move2=60; int duration2=3000;
    printf("");
    motor(0,move2);
    motor(3,move2);
    msleep (duration2);    
      
  }
    return 0;
}
