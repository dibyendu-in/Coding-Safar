<< Documentation
Name:Dibyendu Barman
Date:15/Sept/2022
Description: Write a script to print chess board
Sample Input:
Sample Output:
Documentation

#!/bin/bash

for i in `seq 8` # 'i' is the number of row
do
        for j in `seq 8` # 'j' is the number of column
        do
                c=$(($i+$j))
                d=$(($c%2)) # checking the remainder value '0' and '1'
                if [ $d -eq 0 ]
                then
                        echo -e -n "\e[47m " " "  # to print a white colour box
                else
                        echo -e -n "\e[40m " " "  # to print a black colour box
                fi

        done

echo -e "\e[0m " " "  # after 8 column to make the colour normal
                # '-e' using to enable '\e' as interpreter

done
