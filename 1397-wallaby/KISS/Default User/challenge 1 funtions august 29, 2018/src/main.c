iw#include <kipr/botball.h>

int move(int speed_left, int speed_right, int duration){

    motor(3, speed_left);
    motor(0, speed_right);
    msleep( duration); 
    return 0;   
}



int main()
{
    enable_servos();
    set_servo_position(1,1050);
    
    
    
    printf("go straight\n");
    move(50, 50, 3000);
    move(50, 50, 3000);

	printf("go straight\n");
    move(-50, -50, 3000);
    move(-50, -50, 3050);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
