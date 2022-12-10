<< Documentation
Name:Dibyendu Barman
Date:22/Sept/2022
Description: A15. Write a shell script to convert string lower to upper and upper to lower.
Sample Input: A15.sh file.txt
Sample Output: what is os?
Documentation

#!/bin/bash

if [ $# -eq 1 ]
then
        if [ -f $1 ] # checking file or not
        then
                if [ -s $1 ] # checking contents inside the file
                then
                        echo "1 - Lower to Upper"
                        echo "2 - Upper to Lower"
                        read -p "Please select option: " x
                        if [ $x -eq 1 ]
                        then

                                lu=`cat $1 | tr a-z A-Z` # lower to upper case

                                echo "$lu"

                        elif [ $x -eq 2 ]
                        then

                                ul=`cat $1 | tr A-Z a-z` # upper to lower case

                                echo "$ul"
                        else
                                echo "Invalid input, please try again."
                        fi
                else
                        echo "Error: No contents inside the file."
                fi
        fi
else
        echo "Error : Please pass the file name through command line."
fi
