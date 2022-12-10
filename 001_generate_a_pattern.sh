<< Documentation
Name: Dibyendu Barman
Date:15/Sept/2022
Description: A1. Write a program read n and generate a pattern given below ( Number increments from left to right )
Sample Input: 5
Sample Output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
Documentation

#!/bin/bash

read -p "Enter the Number: " n # read the input from user

for i in `seq $n`   # 'i' is the number of row
do
        for j in `seq $i` # 'j' is the number of column
        do
                echo -n "$j "  # '-n' used to print output in same line
        done
        echo  # 'echo' used for print a new line
done
