#include <kipr/botball.h>
int main()
{
    int servos (int up_down,int right_left,int stop_time){
    	enable_servos();
    	set_servo_position(0,up_down);
    	set_servo_position(1,right_left);
    	msleep(stop_time);
     
        return 0;
    }

    int move(int speed_left,int speed_right,int duration){
        motor(0,speed_left);
        motor(3,speed_right);
        msleep(duration);
        
        return 0;
    }

    servos(1391,1829,200);                //set servos
    move(54,50,6800);                     //go forward
    servos(1391,952,200);                 //set servos
    move(-54,-50,2500);                   //go backward
    move(50,-50,1000);                     //turn right
    move(54,50,3500);                       //go forward
    move(50,-50,750);                       //turn right
    servos(724,952,200);                    //set servos
    move(52,50,2000);                      //go forward
    move(0,0,2000);                         //stop
    servos(1378,952,200);                 //set servos
    servos(1378,1602,200);                //set servos
    move(0,0,1000);                         //stop
    servos(1090,1602,200);                  //set servos
    servos(724,1836,200);                 //set servos
    move(0,0,1000);                        //stop
    move(-54,-50,2300);                     //go backward
    move(54,-50,1500);                    //turn right
    servos(724,1602,200);                  //set servos
    move(54,50,1800);                       //go forward 
    servos(1378,1602,800);                 //set servos
    servos(1378,952,500);                   //set servos
    servos(1024,952,200);                   //set servos
    move(54,-50,1750);                        // turn right
    move(54,50,5500);                       // go forward
    move(0,0,1000);                        //stop
    servos(1378,952,200);                 //set servos
    servos(1378,1602,200);                //set servos
    move(0,0,1000);                         //stop
    servos(1090,1602,200);                  //set servos
    servos(724,1836,200);                 //set servos
    move(0,0,1000);                        //stop
    move(-54,-50,2300);                     //go backward
    move(-54,50,2000);                       //turn left
    move(54,50,2000);                        //go forward
    move(-54,50,2000);                       //turn left
    move(54,50,4000);                        //go forward
    
    printf("1 by 3\n");
    return 0;
}
