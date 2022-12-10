<< Documentation
Name:Dibyendu Barman
Date:29/Sept/2022
Description: Write a script command line MCQ Test (Auto Evaluated).
Sample Input:
Sample Output:
Documentation

#!/bin/bash

sign_up ()

{
    #sleep 3s
    header  # header part linked with sign_up part 
    echo -e "\e[92m<<<<<\e[0m Signup \e[92m>>>>>\e[0m"
    users=(`cat user.csv`) # checking the content of user.csv file
    echo "Enter Username:"
    read username
    #echo "$((${#users[@]}))"
    #echo "${users[@]}"
    for user in `seq 0 $((${#users[@]}-1))`
    do
	userid=${users[$user]}
#	echo "$userid"
  
    if [ $userid = $username ] # checking the new username with the existing username 
    then
	echo -e "\e[31mUsername already exists! Plase use different username.\e[0m"
	sign_up  # if username already existing then it will redirect to sign_up again 
    fi
    done
    pw=1
    while [ $pw -ne 0 ]	
    do
    	echo "Enter Password: "
    	read -s password
#	echo "length ${#password}"
	if [ ${#password} -lt 6 ] # checking the password length lessthan 6 or not
	then
	    echo -e "\e[31mPlease use atleast 6 character of password.\e[0m"
	else
	    pw=0
	fi
    done
    pass=1
    attempts=4
    while [ $pass -ne 0 -a $attempts -ne 0 ]
    do
	echo "Confirm Password: "
	read -s conf_password
	if [ $conf_password = $password ] # checking the password with the confirm password
	then
	    pass=0
	    echo -e "\e[32mCongratulation! Your Username & Password Created Successfully!\e[0m"
	    
    	    echo $username >> user.csv  # storing the username inside the user.csv file
	    echo $conf_password >> password.csv # storing the password inside the password.csv file
	    welcome
	else
	    attempts=$(($attempts-1)) # if password is not match with confirm password then it will decresing the attempts value
	    echo -e "\e[31mWrong Password! Remaining Attempts\e[0m = $attempts"

	    if [ $attempts -eq 0 ] # if attempts equal to zero then it will redirect to the sign_up part
	    then
		echo -e "\e[31mSorry! You crossed your maximum limit.\e[0m"
		echo "Signup Again!"
		sign_up
	    fi
	fi
    done

}

sign_in ()

{
    #sleep 3s
    header
    echo -e "\e[32m<<<<<\e[0m Signin \e[32m>>>>>\e[0m"
    users=(`cat user.csv`)  # storing the contents of user.csv inside the 'users' variable
    found=0
    attempts=4 # 4 attempts are providing to the user
    while [ $found -ne 1 -a $attempts -ne 0 ]
    do
	echo -e "\e[34mEnter Username:\e[0m "
	read login_user
	for user in `seq 0 $((${#users[@]}-1))`
	do
	    #echo ${users[$user]} 

	    if [ ${users[$user]} = $login_user ] # checking the username with the existing username
	    then
		found=1
		position=$user # collecting the index value of 'user' to 'position' variable
#		echo "User: $position"
	    fi
	done
	if [ $found -eq 1 ]
	then
	    echo -e "\e[92m:) Great!\e[0m"
	else
	    echo -e "\e[31mUsername does't exist\e[0m"
	    attempts=$(($attempts-1)) # if condition is false the attempts value will decrease
	    if [ $attempts -gt 0 ]
	    then
		echo "Please try again"
		echo "You have $attempts attempts remaining"
	    else
		echo -e "\e[31mSorry! You crossed your maximum limit.\e[0m"
		echo "Plaease Signup again"
	       welcome  # after 4 attempts it will redirect to the sign_up or home part
	    fi
	fi
    done	

    password=(`cat password.csv`)   # storing the contents of password.csv to 'password' variable
    attempts=4
    found=0
    while [ $found -ne 1 -a $attempts -ne 0 ]
    do
	echo -e "\e[34mEnter Password:\e[0m "
	read -s login_pass
	echo
	#echo "Position: $position"  # position value is the same index value of username
	#echo "Pass Position: ${password[$position]}"
	if [ ${password[$position]} = $login_pass ]  # checking the current password with the same user existing password
	then
	 #   echo "Password Matched"
	    echo -e "\e[92mLogin Successful! You can start your exam.\e[0m"
	    start_test # if condition true then it will go the test part
	    found=1
	else
	    echo -e "\e[31mWrong Password! Plase try again.\e[0m"
	    attempts=$(($attempts-1))  # if condition false then attempts value will be decrease
	    if [ $attempts -gt 0 ]
	    then
		echo "You have $attempts attempts remaining"
	    else
		echo -e "\e[31mSorry! No more attempts. Please try latter\e[0m"
		welcome # if 4 attempts over the it will be redirect to the welcome part or home
	    fi
	fi

    done
}

start_test ()
{
    header
    echo -e "1) \e[32mTake the Test\e[0m"
    echo -e "2) \e[31mExit\e[0m"
    echo
    read -p "Enter your choice: " choice 
    line=`cat question_set.txt | wc -l`  # checking the line number of question_set.txt file
    
    case $choice in
	1)
	    for i in `seq 5 5 $line` # starting i value is 5 & it will increase by 5 in each ietration
	    do
		#clear
		#sleep 2s
		header
		echo
		head -$i question_set.txt | tail -5  # display the 5 line of question_set.txt
		echo
		for j in `seq 10 -1 1` # ti
		do
		    echo -e "\r\e[31mEnter the currect answer\e[0m \e[32m$j\e[0m : \c" # '\r' carriage return '\c' cursor will not move the new line.
		    read -t 1 ans # '-t' enable the time by 1 second & 'ans' taking the user input
		    if [ ${#ans} -ne 0 ]
		    then
			break
		    fi  
		done
	#	echo "word count: ${#ans}"
		    
	#	read -p "Choose the currect answer : " ans
		if [ ${#ans} -eq 1 ]
		then
		echo "$ans" >> user_ans.txt  # user answer are storing inside the user_ans.txt file
	        else
		echo "No_Answer" >> user_ans.txt # if user not given any input then by default 'No_Answer' will store inside file
		fi
		echo

		#echo "Next Question"
	    done

	    
	;;
	
        2)
	    exit
	;;
	
    	*) echo -e "\e[31mPlease choose currect option.\e[0m"
	   start_test
    esac
    results
}

results ()

{
    header
    c_ans=(`cat currect_ans.txt | tr -s ' ' | cut -d ':' -f1`) # 'c_ans' variable is storing the first field of the content of 'currect_ans.txt' file
    c_ans1=(`cat currect_ans.txt | tr -s ' ' | cut -d ':' -f2`) # 'c_ans1' variable is storing the 2nd field of the content of 'currect_ans.txt' file
    u_ans=(`tail -5 user_ans.txt`) # 'u_ans' variable is storing the last 5 line of 'user_ans.txt' file
    #echo "${c_ans[@]}"
    #echo "${u_ans[@]}"
    score=0
   
    for i in `seq 0 $((${#c_ans[@]}-1))`
    do
	if [ ${c_ans[i]} = ${u_ans[i]} ] # checking the user answer with the currect answer
	then
	    echo -e "Q$(($i+1))) Your answer is : \e[32m${c_ans[i]} (Correct)\e[0m"
            echo -e "\e[32mQ$(($i+1)))\e[0m \e[34mCurrect answer is :\e[0m \e[32m${c_ans[i]}. ${c_ans1[i]}\e[0m"
	    echo
	    score=$(($score+1)) # if condition true then score value will increase by 1
	else
	    echo -e "Q$(($i+1))) Your answer is : \e[31m${u_ans[i]} (Incorrect)\e[0m"
	    echo -e "\e[32mQ$(($i+1)))\e[0m \e[34mCurrect answer is :\e[0m \e[32m${c_ans[i]}. ${c_ans1[i]}\e[0m"
	    echo
	fi
    done
	echo -e "\e[32mYour Total Score\e[0m: $score Marks"
	echo
	exit
    
}

header ()

{   sleep 2s  # it will wait for 2 seconds  
    clear  # after 2 seconds will clear the display
	echo ____________________________________________________
    	echo
    	echo -e "\e[32m<<<<<<<<<<<<<<<<<\e[0m \e[1;4mOnline MCQ Test\e[0m \e[32m>>>>>>>>>>>>>>>>>\e[0m"
	echo -e "\e[31mTotal Marks\e[0m : 5                    \e[31mTime\e[0m : 50 Seconds"
	echo ____________________________________________________

}
#header

welcome ()
{
    	header
    	echo -e "1.\e[92mSignup\e[0m"
	echo -e "2.\e[92mSignin\e[0m"
	echo -e "3.\e[92mExit\e[0m"
	echo

	read -p "Please choose option : " choice

	case $choice in
   		1) echo -e "\e[92mGreat! You are ready to Signup.\e[0m"
		    sign_up
		   ;;

	        2) echo -e "\e[92mGreat! You are ready to Signin.\e[0m"
		    sign_in
		    ;;

       		3) exit
		    ;;

		*) echo -e "\e[91mPlease choose currect option\e[0m"
		    welcome
		    ;;

	esac

}

welcome
#start_test
#results
