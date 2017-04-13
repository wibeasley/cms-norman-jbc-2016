#!/bin/bash
# chmod +x harvest-1.sh

# Declare names of Wallaby links (ie, their SSIDs).
bots=(
  "1395-wallaby"  # H & B
  "1397-wallaby"  # J & L
  # "1399-wallaby"  # E & L
  "1407-wallaby"  # M & B
  "1408-wallaby"  # M & M
)

# -----------------
echo "wifi connection"
## Clears the screen.
# clear

for i in "${bots[@]}"
do
  echo $i
  nmcli con up $i
  echo "You're connected to $i."
  scp -r root@192.168.125.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/jbc-2016/$i/
  # mkdir "1-$i"
  # echo $i >> "1-$i/destination-$i.txt"
  echo "You saved from $i."
done

echo "Completed loop over Wallabies"
# ------------------

git add -A
git status
