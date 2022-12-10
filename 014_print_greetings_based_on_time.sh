<< Documentation
Name:Dibyendu Barman
Date:24/Sept/2022
Description: A14. Write a script called say_hello, which will print greetings based on time.
Sample Input:
Sample Output:
Good Morning dibyendu, Have nice day!
This is Saturday 24 in September of 2022 (11:05:15 AM)
Documentation

#!/bin/bash

hour=`date | cut -d ' ' -f4 | cut -d ':' -f1`
day=`date | cut -d ' ' -f1`
month=`date | cut -d ' ' -f2`
date=`date | cut -d ' ' -f3`
year=`date | cut -d ' ' -f6`

if [ $hour -ge 5 -a $hour -lt 12 ]
then
    echo "Good Morning `whoami`, Have nice day!"  # 'whoami' user of the system
    echo "This is $day $date in $month of $year (`date +%r`)"

elif [ $hour -ge 12 -a $hour -lt 14 ]
then
    echo "Good Noon `whoami`, Have nice day!"
    echo "This is $day $date in $month of $year (`date +%r`)"

elif [ $hour -ge 14 -a $hour -lt 17 ]
then
    echo "Good Afternoon `whoami`, Have nice day!"
    echo "This is $day $date in $month of $year (`date +%r`)"

elif [ $hour -ge 17 -a $hour -lt 21 ]
then
    echo "Good Evening `whoami`, Have nice day!"
    echo "This is $day $date in $month of $year (`date +%r`)"

elif [ $hour -ge 21 -o $hour -lt 5 ]
then
    echo "Good Night `whoami`, Have nice day!"
    echo "This is $day $date in $month of $year (`date +%r`)"
fi
