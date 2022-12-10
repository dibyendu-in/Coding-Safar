<< Documentation
Name:Dibyendu Barman
Date:28/Sept/2022
Description: A21. Write a script to replace 20% lines in a C file randomly and replace it with the pattern.
Sample Input:
bash A21.sh main.c
Sample Output:
Before replacing
#include<stdio.h>
int main()
{
  printf("Hello world\n");
}
After replacing
#include<stdio.h>
int main()
{
 <------Deleted----->
}
Documentation

#!/bin/bash

if [ $# -eq 1 ]
then
    if [ -f $1 ] # checking file or not
    then
        if [ -s $1 ] # checking content inside file
        then
            total=`wc -l < $1` # total line count
            if [ $total -ge 5 ]
            then
                echo "Before replacing"
                cat $1  # content of C file before replacing
                perline=`echo "$total * 0.2" | bc` # persentage of total line
                for i in `seq $perline`
                do
                ran_num=`shuf -i 1-$total -n1`  # 'shuf' creating the random number
                sed -i "$ran_num s/.*/<-----Deleted----->/" $1 # 'sed' replacing the line by <-----Deleted----->
                echo "After replacing"
                cat $1  # content of C file after replacing
                done
           else
                echo "Error : Number of line should be greater-than 5"
           fi
       else
           echo "Error: $1 is empty file. So can't replace the string."
       fi
    else
       echo " Error : No such a file."
    fi
else
    echo "Error : Please pass the file name through command line."
fi
