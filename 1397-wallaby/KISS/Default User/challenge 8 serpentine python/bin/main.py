#!/usr/bin/python

import os, sys
from wallaby import *

def main():
	print "go straight"
motor(0,50)
motor(3,50)
msleep(2700) 
        
print "turn left"
motor(0,-50)
motor(3,50)
msleep(1600)
        
print "go straight"        
motor(0,50)
motor(3,50)
msleep(3700)
        
print "turn right"
motor(3,-30)
motor(0,50)
msleep(1000)
        
print "go straight"   
motor(0,50)
motor(3,50)
msleep(1300)
        
print "turn right"       
motor(3,-30)
motor(0,50)
msleep(2000)
        
print "go straight"    
motor(0,50)
motor(3,50)
msleep(3200)
        


if __name__== "__main__":
    sys.stdout = os.fdopen(sys.stdout.fileno(),"w",0)
    main();
