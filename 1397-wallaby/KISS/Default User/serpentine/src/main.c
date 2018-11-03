#include <kipr/botball.h>
//3 from left
//challenge eight b 
int main()
{
    printf("go straight\n");
    motor(0,50);
    motor(3,50);
    msleep(2000);

    printf("turn\n");
    motor(0,00);
    motor(3,50);
    msleep(2300);

    printf("go straight\n");
    motor(3,50);
    motor(0,50);
    msleep(2000);

    printf("turn\n");
    motor(0,50);
    motor(3,-20);
    msleep(1950);

    printf("go straight\n");
    motor(3,50);
    motor(0,60);
    msleep(2200);

    // THE TURN FOR FOUR
    printf("turn\n");
    motor(0,50);
    motor(3,-20);
    msleep(1301);

    printf("go straight\n");
    motor(3,50);
    motor(0,50);
    msleep(1600);
    
    printf("turn\n");
    motor(0,00);
    motor(3,50);
    msleep(2300);
                                 
    //printf("go straight\n");
    //motor(3,50);
    //motor(0,50);
    //msleep(1300);


    //printf("turn\n");
    //motor(0,-15);
    //motor(3,50);
    //msleep(900);

    //printf("go straight\n");
    //motor(3,50);
    //motor(0,50);
    //msleep(1300);

    return 0;
}
