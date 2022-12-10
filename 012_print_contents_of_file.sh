<< Documentation
Name:Dibyendu Barman
Date:21/Sept/2022
Description: A12. Write a script to print contents of file from given line number to next given number of line
Sample Input: A12.sh 5 3 myfile.txt
Sample Output:
line number 5
line number 6
line number 7
Documentation

#!/bin/bash

if [ $# -eq 3 ] # checking total 3 arguments
then
        if [ -f $3 ] # checking it's file or not
        then
                if [ -s $3 ] # checking file contents 
                then

                line_count=`cat $3 | wc -l` # total line count 
                req_line=$(($1+$2-1))       # total required line

                        if [ $line_count -ge $req_line ]
                        then
                                head -$req_line $3 | tail -$2
                        else

                                echo "Error: $3 is having only $line_count lines. file should have atleast $req_line lines"
                        fi
                else
                        echo "File is empty, pleae check once"

                fi
        else
                echo "It's not a file"
        fi
else

        echo "Error: arguments missing!"
        echo "Usage: ./file_filter.sh start_line upto_line filename"
        echo "For eg. ./file_filter.sh 5 5 <file>"
        
fi
