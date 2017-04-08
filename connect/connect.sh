#!/bin/bash

echo "wifi connection"
## Clears the screen.
# clear

## Loop through available interfaces.
while read interface; do                    # While reads a line of the output
    i=$((i+1))                                  # Only God knows what does this (view note 1).
    # echo $i
    type=$(cut -f2 -d ' ' <<< $interface)       # Saves the interface type to check if is wifi.
    # echo $i: $type
    status=$(cut -f3 -d ' ' <<< $interface)     # Saves the status of the current interface.
    echo $i: $type, $status
    interface=$(cut -f1 -d ' ' <<< $interface)  # Selects the INTEFACE field of the output.
    echo $i: $type, $status, $interface
    if [[ "$type" == "802-11-wireless" ]]; then # If is a WiFi interface then:
      interfaces[$i]=$interface                     # Adds the current interface to an array.
      echo "$i: $interface ($status)"               # Prints the name of current interface.
    fi                                          # Ends the if conditional
done < <(nmcli device | tail -n +2)         # Redirects the output of the command nmcli device to the loop.

# Starting from http://askubuntu.com/a/602364/153921
