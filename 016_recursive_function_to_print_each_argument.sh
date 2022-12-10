<< Documentation
Name:Dibyendu Barman
Date:27/Sept/2022
Description: A16. Write a script use a recursive function to print each argument passed to the function
Sample Input: bash A16.sh How are you? I am fine
Sample Output:
How
are
you?
I
am
fine
Documentation

#!/bin/bash

arg=($@) # assign all arguments

if [ ${#arg[@]} -gt 0 ]
then
    len=${#arg[@]}  # total argument count
    j=0
    rec()   # recursive function
    {
        echo ${arg[i]}
        i=$(($i+1))
        j=$(($j+1))
        if [ $j -lt $len ]
        then
            rec ${arg[i]}
        else
            return
        fi
    }
    rec $@ # arguments passing to functions.
else
    echo "Error : Pass the arguments through command line."
fi
