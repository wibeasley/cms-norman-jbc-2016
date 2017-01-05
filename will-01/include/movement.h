typedef enum { false, true} bool;
// #include <stdbool.h>

int straight( int power, double seconds, bool taper ) {
    printf("Move at %i power for %f seconds.\n", power, seconds);
	int power_left = power;
    int power_right = power * .95;
    int i = 0;

    if( taper ) {
        while( i < 10 ) {
   			// printf("i: %i at power %f.\n", i, power_left * (i / 10.0));
            motor(0, power_left * (i / 10.0));
            motor(3, power_right * (i / 10.0));
            msleep(50);
            i++;
        }
        // printf("Stop taper.\n");
    }

    motor(0, power_left);
    motor(3, power_right);
    msleep(seconds * 1000);

    if( taper ) {
        i = 10;
        while( i > 0 ) {
   			// printf("i: %i at power %f.\n", i, power_left * (i / 10.0));
            motor(0, power_left * (i / 10.0));
            motor(3, power_right * (i / 10.0));
            msleep(50);
            i--;
        }
        // printf("Stop taper.\n");
    }

    ao();
    return 0;
}

int rotate( double degrees ) {
    int direction = copysign(1.0, degrees);
    int power = 25;
	int power_left = -direction * power;
    int power_right = direction * power * .99;

    double full_rotation_in_seconds = 6.775;
    double seconds = (full_rotation_in_seconds * direction) * (degrees / 360.0);

    printf("Move %f degrees (consumes %f seconds).\n", degrees, seconds);
    motor(0, power_left);
    motor(3, power_right);
    msleep(seconds * 1000);

    return 0;
}
