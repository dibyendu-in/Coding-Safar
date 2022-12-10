<< Documentation
Name:Dibyendu Barman
Date:23/Sept/2022
Description: A5. Write a script to perform arithmetic operation on digits of a given number
Sample Input: A5.sh 1234+
Sample Output: Sum of digits = 10
Documentation

#!/bin/bash

str=$@ # string
len=${#str} # string length

op=${str:$(($len-1)):1} # slicing operator

dig1=${str:0:1} # first digit of the string

sum=$dig1
sub=$dig1
mul=$dig1
div=$dig1

if [ $len -gt 0 ]
then

case $op in
    +) for i in `seq 1 $(($len-2))`
       do
           dig=${str:$i:1}
           sum=$(($sum+$dig))  # addition
       done
                echo "Sum of digits = $sum"
    ;;
    -) for i in `seq 1 $(($len-2))`
       do
           dig=${str:$i:1}
           sub=$(($sub-$dig)) # subtraction
       done
               echo "Subtraction of digits = $sub"
    ;;
    x) for i in `seq 1 $(($len-2))`
       do
           dig=${str:$i:1}
           mul=$(($mul*$dig)) # multiplication
       done
        echo "Multiplication of digits = $mul"
    ;;
    /) for i in `seq 1 $(($len-2))`
       do
           dig=${str:$i:1}
           div=`echo "scale=2; $div / $dig" | bc` # division
       done
        echo "Division of digits = $div"
    ;;
    *) echo "Error: Operator missing or invalid operator, please pass operator as last digit (+,-,x,/)"
esac
else
    echo "Error : Please pass the arguments through CL."
    echo "Usage : ./operator_dependent.sh 2345+"
fi
