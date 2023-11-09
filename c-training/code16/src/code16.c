/*
WAP to find the largest number in the given array using a pointer.

The array is: float numbers[5] = {983, 2.9, 34, 433, 1000.567};
Create a user-defined function that will accept the pointer as a parameter. The pointer should point to the array defined in the main function.
Using pointer find the largest number in the user-defined function and return the largest number to the main function.
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>
int findLargest(float *, int);
int main() {
	float numbers[5] = {983, 2.9, 34, 433, 1000.567};
	float *ptr;
	ptr = numbers;

	float large = findLargest(ptr,5);
	printf("Largest Number: %.4f", large);

	return 0;
}
int findLargest(float *ptr, int size) {
	int i;
	float large = *ptr;
	for(i=0; i<size; i++) {
		if( *ptr > large ){
			large = *ptr;
		}
		ptr++;
	}
	return large;
}
