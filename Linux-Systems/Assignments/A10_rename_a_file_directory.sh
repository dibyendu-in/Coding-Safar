<< Documentation
Name:Dibyendu Barman
Date:21/Sept/2022
Description: Write a script to rename a file/directory replaced by lower/upper case latters.
Sample Input: File.txt MyFile007.txt dir/ Assign1/ newfolder/
Sample Output: file.txt myfile007.txt DIR/ ASSIGN1/ NEWFOLDER/
Documentation

#!/bin/bash

for i in `ls`  # 'ls' using to list of all file and directory in current working directory
do
        if [ -f $i ] # checking file
        then
                var1=`echo "$i" | tr A-Z a-z` # upper to lower case
                mv $i $var1
        
        elif [ -d $i ] # checking directory
        then
                var2=`echo "$i" | tr a-z A-Z`  # lower to upper case
                mv $i $var2
        fi
done
