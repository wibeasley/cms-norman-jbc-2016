#!/bin/bash
# chmod +x harvest-1.sh

echo "wifi connection"
## Clears the screen.
# clear
bots=(
  "1395-wallaby"
  "1397-wallaby"
  "1399-wallaby"
  "1407-wallaby"
  "1408-wallaby"
)

for i in "${bots[@]}"
do
  echo $i
  nmcli con up $i
  echo "You're connected to $i."
  scp -r root@192.168.125.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/jbc-2016/$i/
  echo "You saved from $i."
done
#files=( "/etc/passwd" "/etc/group" "/etc/hosts" )
#limits=( 10, 20, 26, 39, 48)
