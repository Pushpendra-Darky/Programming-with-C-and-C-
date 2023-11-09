/*
Write a program to input ‘n’ numbers and then find out their sum.

Use malloc() function to dynamically allocate memory as per the value of ‘n’.
Consider using ‘float’, since the user input could be a floating-point decimal value.
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>
#include<stdlib.h>


int main() {
	int n;
	float *ptr,sum=0;

	puts("Enter The Memory size to be allocated");
	scanf("%d", &n);

	ptr = (float*)malloc(n*sizeof(float));
	if(ptr == NULL){
		puts("Unable To Allocate Memory.");
		exit(0);
	} else {
		puts("Enter The Numbers:");
		for (int i=0; i<n; i++) {
			scanf("%f", ptr+i);
		}
		for (int i=0; i<n; i++) {
			sum = sum + ptr[i];
		}
		printf("Sum : %f", sum);
	}
	return 0;
}
