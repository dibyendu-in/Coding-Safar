<< Documentation
Name:Dibyendu Barman
Date:19/Sept/2022
Description: Write a script to print the length of each and every string using arrays.
Sample Input: bash A6.sh hello hai how are you?
Sample Output:
Length of string (hello) - 5
Length of string (hai) - 3
Length of string (how) - 3
Length of string (are) - 3
Length of string (you?) - 4

Documentation

#!/bin/bash

if [ $# -eq 0 ]
then
        echo "Error : Please pass the arguments through command-line."
fi

arg=($@) # '$@' pass all command-line arguments

for i in `seq 0 $(($#-1))` # '$#' total number of command-line arguments
do
        echo "Length of string (${arg[i]}) - ${#arg[i]}"
done
