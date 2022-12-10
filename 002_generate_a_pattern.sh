<< Documentation
Name: Dibyendu Barman
Date:15/Sept/2022
Description: A2. Write a program read 'n' and generate a pattern given below
( Number increasing from top to bottom. )
Sample Input: 5
Sample Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
Documentation

#!/bin/bash

read -p "Enter a number: " n  # read the input number from user
count=1
for i in `seq $n`          # 'i' is the number of row
do
        for j in `seq $i`  # 'j' is the the number of column
        do
                echo -n "$count " # '-n' used to print output in same line

                count=$(($count+1))  # each iteration it increasing the value of 'count' variable
        done
        echo    # 'echo' used for print a new line
done
