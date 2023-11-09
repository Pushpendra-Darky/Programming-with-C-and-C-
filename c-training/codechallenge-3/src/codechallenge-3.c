/*	Write a program to find the area of the circle. Consider including the following in your program:
	Get radius of the circle as user input.
	Use appropriate data types as required.
	To improve user experience, use user-friendly messages.
	 You may decorate your program to greet the user with a welcome message and a thank you note.
*/

#include<stdio.h>
#include<unistd.h>

int main(){
	const float PI = 3.14;
	float radius;
	float area;

	printf("**********Welcome*********\n");
	printf("Enter The Radius in cm:");
	scanf("%f",&radius);

	printf("\nCalculating area....\n");
	usleep(3000000);
	area = PI*radius*radius;
	printf("Area of Circle is %.2f sq.cm\n",area);

	printf("\n******Thank You******\n");
	return 0;
}
