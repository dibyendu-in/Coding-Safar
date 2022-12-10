<< Documentation
Name:Dibyendu Barman
Date:25/Sept/2022
Description: A8. Write a script to sort a given number in ascending or descending order.
Sample Input: -a 5 4 6 2 3 8 9 7 1
Sample Output: Ascending order of array is 1 2 3 4 5 6 7 8 9
Documentation

#!/bin/bash


if [ $# -gt 0 ]  # checking arguments
then
    arr=($@) # assign the number from command line
    op=(${arr[@]:0:1})
    nums=(${arr[@]:1})
    len=$((${#nums[@]}))
     case $op in
         -a) for i in `seq $(($len-1))` # ascending order
             do
                 for j in `seq 0 $(($len-$i-1))`
                 do
                     if [ ${nums[$j]} -gt ${nums[$(($j+1))]} ]
                     then
                         temp=${nums[$(($j+1))]}
                         nums[$(($j+1))]=${nums[$j]}
                         nums[$j]=$temp
                     fi
                 done
             done
             echo "Ascending order of array is ${nums[@]}"
             ;;

         -d) for i in `seq $(($len-1))` # deascending order
             do
                 for j in `seq 0 $(($len-$i-1))`
                 do
                     if [ ${nums[$j]} -lt ${nums[$(($j+1))]} ]
                     then
                         temp=${nums[$(($j+1))]}
                         nums[$(($j+1))]=${nums[$j]}
                         nums[$j]=$temp
                     fi
                 done
             done
             echo "Descending order of array is ${nums[@]}"
             ;;

         *) echo "Error: Please pass the choice."
             echo "Usage:./sorting -a/-d 4 23 5 6 3"
     esac


else
    echo "Error: Please pass the argument through command line."
    echo "Usage:./sorting -a/-d 4 23 5 6 3"
fi
