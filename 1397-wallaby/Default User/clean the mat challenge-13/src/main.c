#include <kipr/botball.h>
// 5 from t
int main()
{
    
    enable_servos(); //turn servo ports on
    set_servo_position(1,1070);//move servo to a set position (parrallel to ground)
    msleep(1000);
    
    set_servo_position(2,1397);//move servo to a set position (open claw)
    msleep(1000);
    
    
    
    printf("go straight\n");
    motor(3,40);
    motor(0,42);
    msleep(700);
    
    motor(0,0);// 
    motor(3,0);
    msleep(800);
    
    set_servo_position(2,850);//move servo to a set position (close claw)
    msleep(1000);
    
    printf("go straight\n");
    motor(3,40);
    motor(0,47);
    msleep(1700);
    
    motor(0,0);
    motor(3,00);
    msleep(800);
    
    set_servo_position(2,1397);//move servo to a set position (open claw)
    msleep(1000);

    printf("go backwards\n");
    motor(0,-50);
    motor(3,-52);
    msleep(1000);

    printf("turn\n");
    motor(0,50);
    motor(3,22);
    msleep(1225);

    
    printf("go straight\n");
    motor(0,50);
    motor(3,52);
    msleep(1100);
    
    motor(0,0);
    motor(3,00);
    msleep(800);
    
    set_servo_position(2,799);//move servo to a set position (close claw)
    msleep(1000);
    
    printf("turn\n");
    motor(3,50);
    motor(0,22);
    msleep(800);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-52);
    msleep(900);
    
    motor(0,0);
    motor(3,00);
    msleep(800);
    
    set_servo_position(2,1397);//move servo to a set position (open claw)
    msleep(1000);
    
    printf("go backwards\n");
    motor(0,-50);
    motor(3,-52);
    msleep(800);
    
    printf("turn\n");
    motor(0,50);
    motor(3,22);
    msleep(900);
    
     printf("go straight\n");
    motor(3,50);
    motor(0,52);
    msleep(1100);
    
    printf("go straight\n");
    motor(3,50);
    motor(0,54);
    msleep(2000);
    
    motor(0,0);
    motor(3,00);
    msleep(800);
    
    set_servo_position(2,799);//move servo to a set position (close claw)
    msleep(1000);
    
    printf("go backwards\n");
    motor(3,-50);
    motor(0,-53);
    msleep(3800);
    
    printf("turn\n");
    motor(3,50);
    motor(0,22);
    msleep(900);
    
    printf("go backwards\n");
    motor(3,-50);
    motor(0,-53);
    msleep(300);
    
    motor(0,0);
    motor(3,00);
    msleep(800);
    
    set_servo_position(2,1397);//move servo to a set position (open claw)
    msleep(1000);
    
    printf("go backwards\n");
    motor(3,-50);
    motor(0,-53);
    msleep(1000);
    
    printf("turn\n");// 90 degrees
    motor(3,50);
    motor(0,22);
    msleep(1400);
    
    printf("go straight\n");
    motor(3,50);
    motor(0,52);
    msleep(1600);
    
    printf("turn\n"); 
    motor(0,40);
    motor(3,12);
    msleep(2450);
    
    printf("go straight\n");
    motor(3,50);
    motor(0,52);
    msleep(600);
    
    printf("close claw\n");
    set_servo_position(2,799);//move servo to a set position (close claw)
    msleep(1000);
    
    printf("turn\n"); 
    motor(0,50);
    motor(3,22);
    msleep(2300);
    
        
    printf("go backwards\n");
    motor(3,-50);
    motor(0,-53);
    msleep(1000);
    
    printf("turn\n"); 
    motor(0,50);
    motor(3,22);
    msleep(1000);
    
    
    

    return 0;
}
