/*
Write a program to display the nth Fibonacci number in the Fibonacci series.

The value ‘n’ will be entered by the user.
The Fibonacci series is a series of numbers in the following sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
Where the 0th Fibonacci number is 0 and the 6th Fibonacci number is 8.
Except for the first two numbers (0 and 1) of the sequence, every other number in the sequence is the sum of the previous two numbers,
for example, 8 = 3 + 5 (addition of 3 and 5).
Note: Code and execute this challenge in your Eclipse IDE.

*/


#include<stdio.h>

void fibonacci(int);
int main() {
	int range, first=0, second=1;
	printf("Enter the range for fibonacci series:\n");
	scanf("%d", &range);

	printf("%d %d ", first, second);
	fibonacci(range);

	return 0;
}
void fibonacci(int range) {
	static int first=0,second=1,third;
	if(range>0){
	    third = first+second;
	    first = second;
	    second = third;
	    printf("%d ", third);
	    fibonacci(range-1);
	}
}
