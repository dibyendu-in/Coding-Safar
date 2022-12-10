<< Documentation
Name:Dibyendu Barman
Date:20/Sept/2022
Description: A18. Write a script to print contens of a directory with out 'ls' command.
Sample Input: bash A18.sh ~/ECEP_Aug_22/LS_Module
Sample Output: Asignment Classwork Project
Documentation

#!/bin/bash


if [ $# -eq 0 ]
then
    echo *  # printing contents of current working directory
else
    for i in $@
    do

        if [ -d $i ] # checking directory
        then
            cd $i
            echo * # printing contents of given directory
        else

            echo "$0: Cannot access '$1': No such a file or directory."

        fi
    done

fi
