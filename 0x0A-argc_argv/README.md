# 0x09. C - argc && argv

> ## Goals to learn
1. Arguments to main
1. argc and argv
1. What does argc and argv mean?
1. how to compile with unused variables
> ## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

> ## General
1. How to use arguments passed to your program
1. What are two prototypes of main that you know of, and in which case do you use one or the other
1. How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters~

> ## Tasks
### It ain't what they call you, it's what you answer to
1. Write a program that prints its name, followed by a new line.
1. If you rename the program, it will print the new name, without having to compile it again
1. You should not remove the path before the name of the program
### Silence is argument carried out by other means
1. Write a program that prints the number of arguments passed into it
1. Your program should print a number, followed by a new line
### The best argument against democracy is a five-minute conversation with the average voter
mandatory
1. Write a program that prints all arguments it receives
1. All arguments should be printed, including the first one
1. Only print one argument per line, ending with a new line
### Neither irony nor sarcasm is argument
1. Write a program that multiplies two numbers.
1. Your program should print the result of the multiplication, followed by a new line
1. You can assume that the two numbers and result of the multiplication can be stored in an integer
1. If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
### To infinity and beyond
1. Write a program that adds positive numbers.
1. Print the result, followed by a new line
1. If no number is passed to the program, print 0, followed by a new line
1. If one of the number contains symbols that are not digits, print Error, followed by a naew line, and return 1
1. You can assume that numbers and the addition of all the numbers van be stored in an int
### Minimal Number of Coins for Change
1. Write a program that prints the minimum number of coins to make change for an amount of money.

1. Usage: ./change cents
1. where cents is the amount of cents you need to give back
1. if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
1. you should use atoi to parse the parameter passed to your program
1. If the number passed as the argument is negative, print 0, followed by a new line
1. You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
