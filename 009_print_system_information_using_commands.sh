<< Documentation
Name:Dibyendu Barman
Date:22/Sept/2022
Description: A9. Write a script to print system information using commands.
Sample Input:
Sample Output:
Documentation

#!/bin/bash

var=y
while [ $var = y ]
do
        echo "1. Currently logged users"
        echo "2. Your shell directory"
        echo "3. Home directory"
        echo "4. OS name & version"
        echo "5. Current working directory"
        echo "6. Number of users looged in"
        echo "7. Show all available shells in your system"
        echo "8. Hard disk information"
        echo "9. CPU information"
        echo "10. Memory Informations"
        echo "11. File system information"
        echo "12. Currently running process"

        read -p "Enter the choice: " x

        case $x in
                1) echo "Currently logged users are: `whoami`" # Currently logged users
                ;;
                2) echo "Your shell directory is: $SHELL"  # Your shell directory
                ;;
                3) echo "Home directory is: $HOME"  # Home directory
                ;;
                4) echo "OS name & version: `uname -v` "  # OS name & version
                ;;
                5) echo "Current working directory: `pwd` "  # Current working directory
                ;;
                6) echo "Number of users looged in: `who -q` " # Number of users looged in
                ;;
                7) echo "show all available shells in your system: `cat /etc/shells` " # all available shells
                ;;
                8) echo "Hard disk information: `lsblk` "  # Hard disk information
                ;;
                9) echo "CPU information: `cat /proc/cpuinfo`" # CPU information
                ;;
                10) echo "Memory Informations: `cat /proc/meminfo` " # Memory Informations
                ;;
                11) echo "File system information:`df` "  # File system information
                ;;
                12) echo "Currently running process: `ps`"  # Currently running process
                ;;
                *) echo "Error : Invalid option, please enter valid option"
        esac
read -p "Do you want to continue(y/n)?" var
done
