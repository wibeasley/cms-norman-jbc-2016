#include <kipr/botball.h>
//3 from the T top left corner
int main()
{
    enable_servos();
    set_servo_position(2,1111);
    set_servo_position(1,1272);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,52.5);
    msleep(2500);
    
    printf("go back\n");
    motor(0,-50);
    motor(3,-52.5);
    msleep(1000);
    
    printf("turn\n");
    motor(0,25);
    motor(3,00);
    msleep(2000);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,52.5);
    msleep(1500);
    
    enable_servos();
    set_servo_position(2,1111);
    set_servo_position(1,1272);
    
    printf("turn\n");
    motor(3,25);
    motor(0,-10);
    msleep(1600);
  
     printf("go forward\n");
     motor(3,52.5);
     motor(0,50);
     msleep(4500);
     
    enable_servos();
    set_servo_position(1,982);
    set_servo_position(2,752);
    
    printf("turn\n");
    motor(3,25);
    motor(0,-10);
    msleep(6000);
    
    printf("go backward\n");
     motor(3,-52.5);
     motor(0,-50);
     msleep(100);
    
    motor(0,0);
    motor(3,0);
    msleep(1000);
    
     printf("go forward\n");
     motor(3,52.5);
     motor(0,50);
     msleep(600);
    
    enable_servos();
    set_servo_position(1,982);
    set_servo_position(2,1317);
    
    motor(0,0);
    motor(3,0);
    msleep(1000);
    
     printf("go backward\n");
     motor(3,-52.5);
     motor(0,-50);
     msleep(1000);
    
    printf("turn\n");
    motor(3,-10);
    motor(0,25);
    msleep(1500);
    
    printf("go forward\n");
     motor(3,52.5);
     motor(0,50);
     msleep(3000);
    
    enable_servos();
    set_servo_position(1,982);
    set_servo_position(2,752);
    
    printf("go backward\n");
     motor(3,-52.5);
     motor(0,-50);
     msleep(2000);
    
    printf("turn\n");
    motor(3,25);
    motor(0,-10);
    msleep(30);
    
    printf("go forward\n");
     motor(3,52.5);
     motor(0,50);
     msleep(10);
    return 0;
}
