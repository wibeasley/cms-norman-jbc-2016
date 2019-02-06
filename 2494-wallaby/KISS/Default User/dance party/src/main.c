#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");
  
    //claw closed servo position = 600; claw open servo position = 1515
    //arm up servo position = 0; arm down servo position = 1593
  
    enable_servos();
    set_servo_position(3,900);
    return 0;
}
