#!/usr/bin/python
import os, sys
from wallaby import *

def move(speed_left, speed_right, duration):
    motor(3, speed_left);
    motor(0, speed_right);
    msleep( duration); 
    return 0;   
	

def main():
    print "Hello World"

if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();

enable_servos()
set_servo_position(1,1095) 
set_servo_position(2,613)
     

move(54, 50, 5300)
move(-54, -50, 7000)   

     

















