<< Documentation
Name:Dibyendu Barman
Date:26/Sept/2022
Description: A17. Write a script to determine whether a given file system or mount point is mounted
Sample Input: bash A17.sh /dev/sda2
Sample Output: File-system /dev/sda2 is mounted on / and it is having 98% used space with 3298220 KB free.
Documentation

#!/bin/bash

fs=(`df -h | cut -d ' ' -f1`) # all file-system
avail=(`df -h | tr -s ' ' | cut -d ' ' -f4`) # all available space
use2=(`df -h | tr -s ' ' | cut -d ' ' -f5`) # all use% space
munt=(`df -h | tr -s ' ' | cut -d ' ' -f6`) # all mounted location path

len=${#fs[@]} # total count of file-system
count=0

if [ $# -eq 1 ]
then
    for i in `seq 0 $(($len-1))`
    do
        if [ $1 = ${fs[$i]} ]
        then
            echo "File-system ${fs[$i]} is mounted on ${munt[$i]} and it is having ${use2[$i]} used space with ${avail[$i]} free."
        count=$(($count+1))
        fi
    done
if [ $count -eq 0 ]
then
    echo "$1 is not mounted."
fi
else
    echo "Error : Please pass the name of the file-systen through command line."
fi
