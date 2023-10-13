<< Documentation
Name:Dibyendu Barman
Date:27/Sept/2022
Description: A4. Write a script to delet empty lines from a file
Sample Input: bash A4.sh file.txt
Sample Output:
Empty lines are deleted
Hello
How
are
you?
Documentation

#!/bin/bash

if [ $# -eq 1 ]
then
    sed -i /^[[:space:]]*$/d $1 # removing space from the file content
    echo "Empty lines are deleted"
    cat $1 # content of the file after removing space
else
    echo "Error: Please pass the file name through command line."
fi
