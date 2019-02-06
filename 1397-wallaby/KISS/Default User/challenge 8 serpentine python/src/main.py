#!/usr/bin/python

import os, sys
from wallaby import *

def main():
	enable_servos()
	set_servo_position (1,1024)

print "go straight 1"
motor(0,50)
motor(3,50)
msleep(2700) 
        
print "turn left 2"
motor(0,-50)
motor(3,50)
msleep(1500)
        
print "go straight 2-3"        
motor(0,50)
motor(3,50)
msleep(3700)
        
print "turn right 4"
motor(3,-30)
motor(0,50)
msleep(1000)
        
print "go straight 4"   
motor(0,50)
motor(3,50)
msleep(1300)
        
print "turn right 4"       
motor(3,-30)
motor(0,50)
msleep(1200)
        
print "go straight 4"    
motor(0,50)
motor(3,50)
msleep(2500)
        
print "turn 4"   
motor(0,-50)
motor(3,-50)
msleep(1000)
        
print "turn 4"   
motor(0,50)
motor(3,0)
msleep(980)
        
print "go straight 4"    
motor(0,50)
motor(3,50)
msleep(1500)
        
print "turn 4"   
motor(3,50)
motor(0,-50)
msleep(800)
        
print "go straight 5"    
motor(0,50)
motor(3,50)
msleep(2000)
        
print "turn 5-6"
motor(0,0)
motor(3,50)
msleep(2000)
        

        



if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
