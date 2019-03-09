#include <kipr/botball.h>
//on the S
// we finished 
int main()
{
  
    //int go_forward = 3;
    //int i=0; 
    //while(i<go_forward);{
   // printf("loop:%i\n", i);
        
        printf("go straight 1\n");
        motor(0,55);
        motor(3,50);
        msleep(2000);

        printf("go back 1\n");
        motor(0,-50);
        motor(3,-50);
        msleep(2000);
        //spin();
        //stop();
        
//i=i+1;
    
    
    
    
    printf("go straight 2\n");
    motor(0,55);
    motor(3,50);
    msleep(2000);
    
    printf("go back 2\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    enable_servos();
    printf("up\n");
    set_servo_position(1,708);
    
    printf("go straight 3\n");
    motor(0,54);
    motor(3,50);
    msleep(2000);
    
    printf("go back 3\n");
    motor(0,-50);
    motor(3,-51);
    msleep(2000);
    
     printf("down\n");
    set_servo_position(1,1260);
    
    printf("go straight 4\n");
        motor(0,55);
        motor(3,50);
        msleep(2000);

        printf("go back 4\n");
        motor(0,-50);
        motor(3,-50);
        msleep(2000);
        //spin();
        //stop();
        
//i=i+1;
    
    
    
    
    printf("go straight 5\n");
    motor(0,55);
    motor(3,50);
    msleep(2000);
    
    printf("go back 5\n");
    motor(0,-50);
    motor(3,-50);
    msleep(2000);
    enable_servos();
    printf("up\n");
    set_servo_position(1,708);
    
    
    printf("turn right 1\n");
    motor(0,00);
    motor(3,40);
    msleep(2000);
    
   
    printf("turn left 1\n");
    motor(3,00);
    motor(0,40);
    msleep(2000);
    
    
    printf("turn right 2\n");
    motor(0,00);
    motor(3,40);
    msleep(2000);
    
    printf("turn left 2\n");
    motor(3,00);
    motor(0,40);
    msleep(2000);
    
    printf("360 counter clockwise turn 1\n");
    motor(0,50);
    msleep(6000);
    
    
    printf("360 clockwise turn 1\n");
    motor(3,50);
    motor(0,00);
    msleep(6000);
    

    
    
    printf("turn right 3\n");
    motor(0,00);
    motor(3,40);
    msleep(2000);
    
    printf("turn left 3\n");
    motor(3,00);
    motor(0,40);
    msleep(2000);
    
    printf("up\n");
    set_servo_position(1,708);
    
    printf("turn right 4\n");
    motor(0,-20);
    motor(3,50);
    msleep(2000);
    printf("down\n");
    set_servo_position(1,1460);
    
    printf("turn left 4\n");
    motor(3,00);
    motor(0,40);
    msleep(2000);
    
    printf("up \n");
    set_servo_position(1,708);
    
    printf("turn right 5\n");
    motor(0,00);
    motor(3,40);
    msleep(2000);
    printf("down\n");
    set_servo_position(1,1460);
    printf("turn left 5\n");
    motor(3,00);
    motor(0,40);
    msleep(2000);
    
    printf("up\n");
    set_servo_position(1,708);
    
    printf("down\n");
    set_servo_position(1,1460);
    
    return 0;
}
