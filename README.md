# jbc-2016
Junior Botball Challenge

Helpful Links:
* Organized by [KISS Institute for Practical Robotics](http://www.kipr.org/).
* Link firmware [downloads](http://www.kipr.org/hardware-software).

*cut below this line for the student's journal*

----------------


## Minimum Structure

1. project file name 
    1. Create under a NON-default user.
    1. Contains only lowercase numbers, digits, and dashes.  
    1. No uppercase letters, spaces, underscores, or special characters like exclamation points.
    1. No abbreviations.
    1. No grammatical mistakes.
1. use `printf()` statements liberally
    1. at the top of execution, display the project name.  This reduces the chance that someone repeatedly executes the wrong program.  For example "tag-your-it" *vs* "tag-you-are-it".
    1. at the top of execution, display the robot's starting position on the mat.  (Ideally the position of the vertical black lego attached great the front of the robot.) For example, "B, -3".
    1. at the top of each "chunk" of code, display the chunk's intent.  For example, "go straight", "turn left", "raise vertical servo", "close claw", "push cans back"...
1. if servos are used, set their starting position at the file's beginning.
1. before connecting to the IDE, ping the robot.  On a Chromebook with a Chrome browser open, hit ctrl+alt+t.  
    1. over wifi, `ping 192.168.125.1`
    1. over usb, `ping 192.168.124.1`

## Troubleshooting Tips

1. use `printf()` statements to isolate the problematic behavior.
1. check power for laptop & robot.
1. check connectivity with ping (see above).
1. check the program is saving & compiling correctly.
1. servo instructions should be followed by 500+ msec of `msleep()` duration.
1. check you're on the correct user & program (within the IDE).
1. if there are problems with motors/servos
    1. correct port numbers are specified in the code.
    1. motors/servos work through the Wallaby test GUI.
1. if a program doesn't appear in the Wallaby list:
    1. check the program is saved & compiled in the IDE.
    1. check you're looking under the correct user (which may not be `Default User`).
    1. go to home, then return to list (especially for brand-new programs).

## General Tips

1. Avoid more then 40% power to wheel motors.
1. Avoid switching motor directions abruptly. Pad with
    ```c
    motor(0, 0);
    motor(3, 0);
    msleep(500);
    ```
1. Servos arms are 'aligned' and never hit resisitance.
1. Wires are tidy, and can't be pinched.
1. An instructor should install & align the servo arms.
