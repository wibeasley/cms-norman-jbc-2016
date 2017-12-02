#include <kipr/botball.h>

int main() {
    printf("moves motors 1\n");
    motor(0,95);
    motor(3,90);
    msleep(3000);
    
    printf("turns motors 1\n");
    motor(0,95);
    motor(3,30);
    msleep(2750);
    
    printf("moves motors 2\n");
    motor(0,85);
    motor(3,80);
    msleep(4500);
    return 0;
}
