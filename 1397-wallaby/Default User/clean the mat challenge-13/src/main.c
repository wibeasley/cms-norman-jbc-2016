#include <kipr/botball.h>
// 3 from t two down
int main()
{
    
    enable_servos(); //turn servo ports on
    set_servo_position(1,1024);//move servo to a set position (parrallel to ground)
    msleep(1000);
    
    set_servo_position(2,1397);//move servo to a set position (parrallel to ground)
    msleep(1000);
    
    
    
    printf("go straight\n");
    motor(0,50);
    motor(3,52);
    msleep(1800);

    printf("go backwards\n");
    motor(0,-50);
    motor(3,-52);
    msleep(1000);

    printf("turn\n");
    motor(0,50);
    motor(3,22);
    msleep(1000);

    
    printf("go straight\n");
    motor(0,50);
    motor(3,52);
    msleep(900);
    
    motor(0,0);
    motor(3,00);
    msleep(800);
    
    set_servo_position(2,799);//move servo to a set position ()
    msleep(1000);
    
    

    printf("turn\n");
    motor(3,50);
    motor(0,22);
    msleep(700);


    return 0;
}
