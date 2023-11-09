/*
Write a program to input ‘n’ numbers and then find out their sum.

Use calloc() function to dynamically allocate memory as per the value of ‘n’.
Consider using ‘float’, since the user input could be a floating-point decimal value.
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
	int n;
	float sum=0;
	float *ptr;

	puts("Enter The Memory SIze to be allocated:");
	scanf("%d", &n);

	ptr = (float*)calloc(n,sizeof(float));
	if(ptr==NULL){
		printf("Unable To Allocate Memory...\n");
		exit(0);
	} else {
		puts("Enter The data into memory...");
		for (int i=0; i<n; i++){
			scanf("%f", ptr+i);
			sum = sum+ptr[i];
		}
		printf("Sum: %f", sum);
	}
	return 0;
}
