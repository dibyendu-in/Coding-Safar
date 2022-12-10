<< Documentation
Name:Dibyendu Barman
Date:23/Sept/2022
Description: A13. Write a script to display the longest and shortest user-names on the system
Sample Input: bash A13.sh
Sample Output:
The Longest Name is: speech-dispatcher
The Shortest Name is: lp
Documentation

#!/bin/bash

arr=(`cat /etc/passwd | cut -d ':' -f1`)

num=${#arr[@]} # total number of arrays

long=${#arr[0]}
short=${#arr[0]}

for i in `seq 0 $(($num-1))`
    do
        if [ ${#arr[i]} -gt $long ]
        then
                long=${#arr[i]}

                count1=$i   # last longest count

        elif [ ${#arr[i]} -lt $short ]
        then
                short=${#arr[i]}

                count2=$i   # last shortest count

        fi
    done

echo "The Longest Name is: ${arr[count1]}"

echo "The Shortest Name is: ${arr[count2]}"
