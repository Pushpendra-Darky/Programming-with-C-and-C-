/*
Write a program to input a number and check if it is a palindrome or not using do while loop.

A palindrome is a number that is the same if read from left to right or right to left. Examples of palindromes: 121, 1331, 4987894, 2002, 98789, 989.

Hint: To check if a number is a palindrome or not, you need to first reverse the number and then compare the reversed number with the original number.
 Here are a few steps you should consider while writing the program.

Enter 'num'
Store the 'num' in a separate variable 'originalNum' (so that it can be compared with the reversedNumber at the end of the program)
Execute do while loop until 'num' is greater than 0. And with each iteration do the following:
Find the last digit of the number
The last digit will be the remainder value when num is divided by 10
Multiply reversedNumber by 10 and add the remainder
This will allow you to generate a reversedNumber when the execution of the do while loop stops
Delete the last digit from the num by dividing it by 10
This will give a new num value to be used in the next iteration
The loop ends when num is not greater than zero
If reversedNum is equal to originalNum then it is palindrome, else it is not a palindrome
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>

int main(){

	int num ,original,reversed=0,rem;;
	puts("Enter the Number:");
	scanf("%d", &num);
	original = num;

	do {
		rem = num%10;
		reversed = (reversed*10)+rem;
		num = num/10;
	} while (num>0);

	if(original==reversed)
		printf("Number is palindrome.\n");
	else
		printf("Number is not a palindrome number.\n");


	return 0;
}
