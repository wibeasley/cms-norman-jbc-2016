#include <kipr/botball.h>
 void move (int speed_left, int speed_right, int duration){
  motor (3,speed_left); 
  motor (0,speed_right);
  msleep(duration);
}

int movebackwards (int speed_left, int speed_right, int duration){
  motor (3,speed_left);
  motor (0,speed_right);
  msleep(duration);
  return 0;
}

int main()
{
    printf("Hello World\n");
//    move(60,60,5500);
//movebackwards(-60,-60,5500);
int result = add(9999999999,1);
printf("%d\n",result);
}
int add(int num1,int num2){   
 return num1 + num2;
} 