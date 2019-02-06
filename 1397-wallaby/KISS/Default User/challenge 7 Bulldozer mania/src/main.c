#include <kipr/botball.h>
//3 from  the "T", bottom left corner
//we finished!
int main()
{
    printf("Hello World\n");
    enable_servos();
    set_servo_position(1,1146);//parrallel to the ground
    msleep(800);
    set_servo_position(2,1281);//open claw
    msleep(800);
    
   printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(800);

    motor(0,00);
    motor(3,00);
    msleep(300);

    set_servo_position(2,800);//close claw
    msleep(800);
    
    set_servo_position(1,600);//parrallel to the ground
    msleep(800);

    motor(0,-50);
    motor(3,-50);
    msleep(800);

    motor(0,60);
    motor(3,00);
    msleep(2500);
    
    motor(0,-50);
    motor(3,-50);
    msleep(400);

    motor(0,00);
    motor(3,00);
    msleep(300);

    set_servo_position(1,1146);//parrallel to the ground
    msleep(800);
    set_servo_position(2,1281);//open claw
    msleep(800);
    
    motor(0,-50);
    motor(3,-50);
    msleep(1500);

    motor(3,40);
    motor(0,00);
    msleep(2200);
    
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(800);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(2,781);//close claw
    msleep(800);
    
    set_servo_position(1,600);//parrallel to the ground
    msleep(800);
   
    motor(0,-65);
    motor(3,-50);
    msleep(3500);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(1,1146);//parrallel to the ground
    msleep(800);
    set_servo_position(2,1281);//open claw
    msleep(800);
    
    motor(0,-50);
    motor(3,-20);
    msleep(1200);
    
    motor(0,-50);
    motor(3,-50);
    msleep(700);
    
    motor(3,00);
    motor(0,50);
    msleep(1000);
    
    motor(0,50);
    motor(3,50);
    msleep(4500);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(2,871);//close claw
    msleep(800);
    
    set_servo_position(1,600);//parrallel to the ground
    msleep(800);
    
    motor(0,-60);
    motor(3,-60);
    msleep(5000);
    
    motor(0,00);
    motor(3,00);
    msleep(300);
    
    set_servo_position(1,1146);//parrallel to the ground
    msleep(800);
    set_servo_position(2,1281);//open claw
    msleep(800);

    return 0;
}

