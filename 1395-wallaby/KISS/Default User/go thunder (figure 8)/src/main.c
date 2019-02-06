#include <kipr/botball.h>
int move (int speed_left, int speed_right, int duration){
    
  motor(0,speed_left);  
  motor(3,speed_right);  
  msleep(duration);  
  return 0;
}
int main(){
  	move(50,50,4000); //go forward
    move(-30,30,1500); //pivot left
    move(50,50,5000);  //go forwerd
    move(30,-30,1500); //pivet right
    move(50,50,4000); //go forwerd
    move (30,-30,1000); //pivit right
    move (50,50,3000); // go forwerd
    move (30,-30,1500);//pivit left
    move(50,50,3000);//go forwed 
    move(30,-30,1000);//pivit right
    move(50,50,3000);// go forwrd
    move(-30,30,1500);//pivit left
    move(50,50,5500);//go forwrd
    
    return 0;
}
