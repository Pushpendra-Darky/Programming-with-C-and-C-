/*

Write a program to calculate the perimeter of a given rectangle.

Take the length and breadth of the rectangle as user input.
The length and breadth could be a decimal value entered by the user.
Define a function that will accept the length and breadth of the rectangle as parameters and return the perimeter of that rectangle.
Additionally, you can greet the user with a welcome message. To keep the main function clean,
put the code to greet the user within a separate function.
Note: Code and execute this challenge in your Eclipse IDE
*/

#include<stdio.h>

float calPerimeter(float, float);

int main() {

	float perimeter,length,breadth;
	printf("Enter The Length and Breadth of rectangle:\n");
	scanf("%f %f", &length,&breadth);

	 perimeter = calPerimeter(length,breadth);
	 printf("Perimeter Of Rectangle : %.2f\n", perimeter);

	return 0;
}

float calPerimeter(float length, float breadth) {
	return 2*(length+breadth);
}
