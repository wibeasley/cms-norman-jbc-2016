#!/bin/bash
# chmod +x harvest-1.sh

# Declare names of Wallaby links (ie, their SSIDs).
#   To avoid storing passwords in code, initially connect to each Wallaby (manually).
#   Make sure the password is saved on your machine, so future connections won't require them.
#   If a wallaby is missing or out of range, the script will scipt over it after the nmcli times out.
#   Or temporarily comment out the Wallaby in the array below.
bots=(
  "1395-wallaby"  # H & B
  "1397-wallaby"  # J & L
  "1399-wallaby"  # E & L
  "1407-wallaby"  # M & B
  "1408-wallaby"  # M & M
)

# -----------------
echo "Looping over Wallabies"

for i in "${bots[@]}"
do
  echo "Attempting to connect to $i."
  nmcli con up $i
  ping -c 2 192.168.125.1

  # TODO: enclose this in if-block, and skip if the connection failed.
  #   Currently, after a failed connecion, nothing is downloaded, and it moves on to the next Wallaby.
  #   (Possibly is downloads again from the previous Wallaby.)
  echo "Attempting to download files from $i."
  scp -r root@192.168.125.1:'~/Documents/KISS/Default\ User/' ~/Documents/kipr/jbc-2016/$i/

  # Uncomment to simulate downloading files.
  # mkdir "1-$i"
  # echo $i >> "delete-me-$i/destination-$i.txt"

  echo "Completed $i."
done

echo "Completed loop over Wallabies"
