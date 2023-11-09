/*
 	 Author:	Pushpendra
 	 Module:	C Programming
 	 Task:	write a C program to generate the report card of a student based on his marks secured in the final examination.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {

	printf("------------Welcome----------------\n");
	printf("     Jawahar Navodaya Vidyalaya\n");
	printf("      --Annual Report Card--\n");

	char name[20];
	int class;
	char section;
	int mathematics, english, hindi, science, socialScience;
	int sumOfNum;
	char grade;


	printf("Enter The Name Of Student:\n");
	scanf("%[^\n]%*c", name);
	printf("Enter The Student Class:\n");
	scanf("%d", &class);
	while(getchar() != '\n');
	printf("Enter The Student Class Section:\n");
	scanf("%c", &section);

	printf("Enter The Marks Obtained in Mathematics out of 100:\n");
	scanf("%d", &mathematics);
	printf("Enter The Marks Obtained in English out of 100:\n");
	scanf("%d", &english);
	printf("Enter The Marks Obtained in Hindi out of 100:\n");
	scanf("%d", &hindi);
	printf("Enter The Marks Obtained in Science out of 100:\n");
	scanf("%d", &science);
	printf("Enter The Marks Obtained in Social Science out of 100:\n");
	scanf("%d", &socialScience);

	sumOfNum = mathematics + english + hindi + science + socialScience;

	if (sumOfNum<0 || sumOfNum>600){
		exit(1);
	} else if (sumOfNum>=450 && sumOfNum<=500){
		grade = 'A';
	}else if (sumOfNum>=400 && sumOfNum<=449){
		grade = 'B';
	}else if (sumOfNum>=350 && sumOfNum<=399){
		grade = 'C';
	}else if (sumOfNum>=300 && sumOfNum<=349){
		grade = 'D';
	}else if (sumOfNum>=200 && sumOfNum<=299){
		grade = 'E';
	}else if (sumOfNum>=0 && sumOfNum<=199){
		grade = 'F';
	}
	printf("Student Details Generated...\n");
	usleep(3000000);
	printf("\n");
	printf("Student Name : %s\n", name);
	printf("Student Class: %d\n", class);
	printf("Class Section: %c\n", section);
	printf("\n");
	printf("Marks Obatined Out Of 100:\n");
	printf("Mathematics        : %d\n", mathematics);
	printf("English            : %d\n", english);
	printf("Hindi              : %d\n", hindi);
	printf("Science            : %d\n", science);
	printf("Social Science     : %d\n", socialScience);
	printf("Total Marks Secured: %d/500\n", sumOfNum);
	printf("Grade              : %c\n", grade);

	return 0;
}
