<< Documentation
Name:Dibyendu Barman
Date:26/Sept/2022
Description: A11. Write a script Given album name and corresponding directory, this scripts renames the jpg files with new name passed through command line.
Sample Input: A11.sh day_out
Sample Output: day_out001.jpg day_out002.jpg day_out003.jpg
Documentation

#!/bin/bash

arr=(*.jpg) # all .jpg file

if [ $# -gt 0 ]
then
     for i in `seq 0 $((${#arr[@]}-1))`
     do
        var=`echo ${arr[i]} | tr -dc [:digit:]` # separate the digits from file name
        mv ${arr[i]} $1$var.jpg # rename the all .jpg files
     done
else
    echo "Error : Please pass the prefix name through command line."
fi
