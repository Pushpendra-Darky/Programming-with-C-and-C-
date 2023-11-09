/*
Write a program to input a 2D array of size 2 * 3,
print all the elements in the form of a matrix and then find out the sum of all the elements entered in the 2D array.
Note: Code and execute this challenge in your Eclipse IDE
*/

#include<stdio.h>

int main(){

	int sum=0;
	int arr[2][3] = {
						{10,15,20},
						{20,25,30},
					};

	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
			sum += arr[i][j];
		}
		printf("\n");
	}
	printf("\n");

	printf("Sum Of Array Elements: %d\n", sum);
	return 0;
}
