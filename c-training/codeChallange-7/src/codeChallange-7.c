/*
Write a program to calculate (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) series, where 'n' is the user input.

Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>

int main(){

	int n;
	int sum=0;
	printf("Enter The Number:\n");
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		sum =sum + (i*i);
	}
	printf("Sum: %d", sum);
	return 0;
}
