/*
Write a program to input a number and then count the number of digits present in the number using while loop.

Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>

int main(){

	int n;
	int count=0;
	printf("Enter The Number:\n");
	scanf("%d", &n);

	while(n>0){
		count++;
		n = n/10;
	}
	printf("NUmber Of Digits present in num: %d",count);
	return 0;
}
