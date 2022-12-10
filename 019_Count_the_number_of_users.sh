<< Documentation
Name:Dibyendu Barman
Date:23/Sept/2022
Description: A19. Write a script to count the number of users with user IDs between given range.
Sample Input: bash A13.sh 0 100
Sample Output: Total count of user ID between 0 to 100 is: 3
Documentation

#!/bin/bash

arr=(`cat /etc/passwd | cut -d ':' -f3`) # fetch user-ids from the /etc/passwd file.

count1=0
count2=0

if [ $# -eq 0 ]
then
    for i in `seq 0 $((${#arr[@]}-1))`
    do
        if [ ${arr[i]} -ge 500 -a ${arr[i]} -le 10000 ] # Default range is 500 - 10000
        then
            count1=$(($count1+1)) # increasing the count value
        fi
    done
    echo "Total count of user ID between 500 to 10000 is: $count1"
fi

if [ $# -eq 2 ]
then

   if [ $2 -gt $1 ]
   then

       for i in `seq 0 $((${#arr[@]}-1))`
    do
        if [ ${arr[i]} -ge $1 -a ${arr[i]} -le $2 ]  # command line arguments given range
        then
            count2=$(($count2+1)) # increasing the count value
        fi
    done
        echo "Total count of user ID between $1 to $2 is: $count2"
   else
        echo "Error : Invalid range. Please enter the valid range through CL."
   fi
elif [ $# -eq 1 ]
then
        echo "Please pass 2 arguments through CL."
        echo "Usage :./user_ids.sh 100 200"

fi
