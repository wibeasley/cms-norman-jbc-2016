#include <kipr/botball.h>

int main() {
    motor(0,90);
    motor(3,90);
    msleep(2000);
    motor(0,90);
    motor(3,50);
    msleep(4000);
    motor(0,80);
    motor(3,80);
    msleep(4000);
    return 80;
}
