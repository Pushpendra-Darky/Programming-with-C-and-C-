/*
Write a program to input 10 numbers in an array, print the array and then find out the largest number present in the array.


Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>

int main(){

	int arr[9];
	printf("Enter The Array Element:\n");

	for (int i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	int large = arr[0];
	printf("Arry Elments:\n");
	for(int i=0; i<10; i++){
		printf("%d\n", arr[i]);
		if(arr[i] > large)
				{
					large = arr[i];
				}

	}

	printf("Largest element of array: %d", large);
	return 0;
}
