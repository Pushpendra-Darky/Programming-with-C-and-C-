/*
Write a program to input two integers and find the sum of those two numbers by using pointers.

Define two integer variables and get user input.
Define two pointers for each integer variable.
Find the sum and print the result.
Note: Code and execute this challenge in your Eclipse IDE
*/

#include<stdio.h>


int main() {
	int num1,num2;
	int *p1,*p2;

	printf("Enter The two Numbers:\n");
	scanf("%d %d", &num1,&num2);
	p1 = &num1;
	p2 = &num2;

	int sum = *p1 + *p2;
	printf("Sum Of %d and %d : %d\n",num1, num2, sum);
	return 0;
}
