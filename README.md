# jbc-2016
Junior Botball Challenge

Helpful Links:
* Organized by [KISS Institute for Practical Robotics](http://www.kipr.org/).
* Link firmware [downloads](http://www.kipr.org/hardware-software).

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
1. Before connecting to the IDE, ping the robot.  On a Chromebook with a Chrome browser open, hit ctrl+alt+t.  
    1. over wifi, `ping 192.168.125.1`
    1. over usb, `ping 192.168.124.1`

## Troubleshooting

1. check power on laptop & robot.
1. check connectivity with ping.
1. check you're on the correct user & program.
1. check the program is saving & compiling correctly.
1. if the robot's behavior is unexpected, user `printf()` statements to isolate the problematic execution.
