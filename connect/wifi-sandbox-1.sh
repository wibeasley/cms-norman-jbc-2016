#!/bin/bash

# nmcli con up 1399-wallaby
# echo "You're connected to 1399-wallaby."
# scp -r root@192.168.125.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/jbc-2016/1399-wallaby/
# echo "You saved from 1399-wallaby."

# nmcli con up 1407-wallaby
echo "You're connected to 1407-wallaby."
scp -rqv root@192.168.125.1:'~/Documents/KISS/Default\ User/' \
  ~/Documents/kipr/jbc-2016/1407-wallaby/  >> ~/Documents/kipr/jbc-2016/.logs/aa.md

echo "c1" >> ~/a.txt
date "+%F %T" >>  ~/Documents/kipr/jbc-2016/.logs/aa.md
date "+%F %T" >> ~/a.txt
echo "c2" >> ~/a.txt
echo "You saved from 1407-wallaby."

exit 0
