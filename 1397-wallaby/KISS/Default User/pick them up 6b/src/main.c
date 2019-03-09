#include <kipr/botball.h>
// 3 from the "T", 1 down top left corner 
// right in front of the can
int main()
{
    printf("enable servo\n");
    enable_servos();
    
    printf("can one\n");
    // can 1
    printf("open servos can one\n");
    set_servo_position(1,988);
    msleep(800);
    set_servo_position(2,1245);
    msleep(800);
    
    printf("go straight can one\n");
    motor(0,50);
    motor(3,50);
    msleep(600);
    
    printf("stop can one\n");
    motor(0,00);
    motor(3,00);
    msleep(300);
     
    printf("close servos can one\n");
    set_servo_position(2,700);
    msleep(800);
    set_servo_position(1,988);
    msleep(800);
    
    
    printf("go straight can one\n");
    motor(0,50);
    motor(3,52);
    msleep(2000);
    
    printf("stop can one\n");
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    printf("open servos can one\n");
    set_servo_position(2,764);
    msleep(800);
    set_servo_position(1,988);
    msleep(800);
    
    printf("open  slowly servos can one\n");
    set_servo_position(1,998);
    msleep(800);
    set_servo_position(2,954);
    msleep(1600);
    set_servo_position(2,1281);
    msleep(800);
   
    printf("go backwards can one\n");
    motor(0,-52);
    motor(3,-50);
    msleep(1700);
    
    printf("turn can one\n");
    motor(0,20);
    motor(3,00);
    msleep(1300);
    
    printf("can two\n");
    //can 2
    printf("go straight can two\n");
    motor(0,50);
    motor(3,52);
    msleep(3400);
    
    printf("turn can two\n");
    motor(3,23);
    motor(0,-20);
    msleep(550);
    
    printf("go forward can two\n");
    motor(0,51);
    motor(3,56);
    msleep(3490);
    
    printf("stop can two\n");
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    printf("open servos can two\n");
    set_servo_position(2,764);
    msleep(800);

    printf("open  servos can two\n");
    set_servo_position(1,700);
    msleep(800);
    
    printf("stop can two\n");
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    printf("go backwards can two\n");
    motor(0,-52);
    motor(3,-50);
    msleep(2500);
    
    printf("turn can two\n");
    motor(0,50);
    motor(3,00);
    msleep(450);
    
    printf("stop can two\n");
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    printf("open  servos  can two\n");
    set_servo_position(1,988);
    msleep(800);
    set_servo_position(2,1220);
    msleep(800);
    
    printf("open  servos can two\n");
    set_servo_position(1,988);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
    printf("can three\n");
    //can 3
    printf("go backwards can three\n");
    motor(0,-50);
    motor(3,-50);
    msleep(1739);
    
    printf("turn can three\n");
    motor(3,50);
    motor(0,00);
    msleep(650);
   
    printf("go straight can three\n");
    motor(0,50);
    motor(3,50);
    msleep(2500);
    
    printf("stop can three \n");
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    printf("closed servos can three\n");
    set_servo_position(2,830);
    msleep(800);
    printf("open servos can three can three\n");
    set_servo_position(1,700);
    msleep(800);
    
    printf("go straight can three\n");
    motor(0,50);
    motor(3,50);
    msleep(1300);
    
    printf("turn can three \n");
    motor(3,50);
    motor(0,00);
    msleep(450);
    
    printf("stop can three\n");
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    printf("open servos can threeycan three\n");
    set_servo_position(1,988);
    msleep(800);
    set_servo_position(2,1090);
    msleep(800);
    
    printf("close servos can three\n");
    set_servo_position(1,988);
    msleep(800);
    set_servo_position(2,1281);
    msleep(800);
    
    return 0;
}
  
    