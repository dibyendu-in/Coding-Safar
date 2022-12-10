<< Documentation
Name:Dibyendu Barman
Date:26/Sept/2022
Description: A20. Write a script for each directory in the $PATH, display the number of executable files in that directory.
Sample Input: bash A20.sh
Sample Output:
Current dir: /user/local/sbin
Current count: 0
Current dir: /usr/sbin
Current count: 205
Total: 205
Documentation

#!/bin/bash

arr=(`echo "$PATH" | tr ":" " "`) # collecting the all element of each PATH

total=0

for i in ${arr[@]}
do
        count=0
        cd $i
        for j in `ls`
        do
                if [ -x $j ] # checking executable file
                then
                count=$(($count+1))
                fi
        done
        total=$(($total+$count))
        echo "Current dir: $i" # each directory path
        echo " current count: $count" # each directory count
done
echo "Total: $total" # total count of executable files
