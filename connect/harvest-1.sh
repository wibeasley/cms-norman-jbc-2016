#!/bin/bash
# chmod +x harvest-1.sh

# Declare names of Wallaby links (ie, their SSIDs).
#   To avoid storing passwords in code, initially connect to each Wallaby (manually).
#   Make sure the password is saved on your machine, so future connections won't require them.
#   If a wallaby is missing or out of range, the script will scipt over it after the nmcli times out.
#   Or temporarily comment out the Wallaby in the array below.
bots=(
  #"1395-wallaby"  # H & B
  #"1397-wallaby"  # J & L
  "1399-wallaby"  # E & V
  #"1407-wallaby"  # M & B
  #"1408-wallaby"  # M & M
  #"2486-wallaby"  # V & C
  #"2488-wallaby"  # M & A
  #"2494-wallaby"  # D & L
)

# -----------------
echo "Looping over Wallabies"

for i in "${bots[@]}"
do
  echo "Attempting to connect to $i."
  nmcli con up $i
  ping -c 2 192.168.124.1

  # TODO: enclose this in if-block, and skip if the connection failed.
  #   Currently, after a failed connecion, nothing is downloaded, and it moves on to the next Wallaby.
  #   (Possibly is downloads again from the previous Wallaby.)
  echo "Attempting to download files from $i."
  scp -r root@192.168.124.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/cms-norman-jbc-2016/$i/

  # Uncomment to simulate downloading files.
  # mkdir "1-$i"
  # echo $i >> "delete-me-$i/destination-$i.txt"

  echo "Completed $i."
done

echo "Completed loop over Wallabies"

echo "Git add & commit"
git add -A
git status
#git commit -m "Update during class"


# Manual update over USB
# scp -r root@192.168.124.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/cms-norman-jbc-2016/1397-wallaby/
# scp -r root@192.168.124.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/cms-norman-jbc-2016/1408-wallaby/
# scp -r root@192.168.124.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/cms-norman-jbc-2016/2494-wallaby/
