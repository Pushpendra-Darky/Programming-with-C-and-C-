/*
Write a program to find the number of odd numbers in the given array.

The array is: int numbers[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};
Create a function that accepts an array of integer values.
The function should find out the number of odd numbers in the array and then print the result.
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>

void findOddNum(int [], int);
int main() {

	int number[10] = {2,98,99,27,31,53,88,92,11,12};

	findOddNum(number,10);

	return 0;
}

void findOddNum(int arr[], int size) {
	int i,count=0;
	printf("Odd Numbers:\n");
	for(i=0; i<size; i++){
		if(arr[i]%2 != 0){
			printf("%d\t", arr[i]);
			count++;
		}
	}
	printf("\nNumber Of Odd Numbers: %d", count);
}
