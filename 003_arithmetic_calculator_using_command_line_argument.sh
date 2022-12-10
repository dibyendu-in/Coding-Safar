<< Documentation
Name:Dibyendu Barman
Date:19/Sept/2022
Description: A3. Write a script for arithmetic calculator using command line argument.
Sample Input: bash A3.sh 25 + 41
Sample Output: 25 + 41 = 66
Documentation

#!/bin/bash

if [ $# -eq 0 ]
then
        echo "Error : Please pass the arguments through command line."
        echo "Usage:./arithmatic_calc.sh 2.3 + 6.7"

elif [ $# -lt 3 ]
then
        echo "Error : please pass 3 arguments."
        echo "Usage:./arithmatic_calc.sh 2.3 + 6.7"
fi


if [ $# -gt 0 -a $# -eq 3 ]
then
case $2 in
        +) sum=`echo "$1 + $3" | bc`   # addition operation
                echo "$1 + $3 = $sum"
        ;;

        -) sub=`echo "$1 - $3" | bc `  # subtraction operation
                echo "$1 - $3 = $sub"
        ;;

        x) mul=`echo "$1 * $3" | bc`   # 'x' using for multiplication operator
                echo "$1 x $3 = $mul"  # multiplication operation
        ;;

        /) div=`echo "scale=2; $1 / $3" | bc` # scale using for taking 2 decimal places
                echo "$1 / $3 = $div"         # division operation
        ;;

        *) echo "please mention operator" # default case
esac
fi
