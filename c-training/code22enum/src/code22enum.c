/*
WAP to print the name of the calendar month using an enum. The enum values should start from 1 for January and end at 12 for December.

Print the name of the month within the switch case statement.
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>

enum Month {

	JANUARY =1,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER
};
int main () {

	enum Month present;
	printf("JANUARY: %d,FEBRUARY: %d,MARCH: %d,APRIL: %d,MAY: %d,JUNE: %d,JULY: %d,AUGUST: %d,SEPTEMBER: %d,OCTOBER: %d,NOVEMBER: %d,DECEMBER: %d\n",JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER);
	present = JANUARY;
	switch(present){

	case JANUARY:
		printf("JANUARY: %d",JANUARY);
		break;
	case FEBRUARY:
		printf("FEBRUARY: %d",FEBRUARY);
		break;
	case MARCH:
		printf("MARCH: %d",MARCH);
		break;
	case APRIL:
		printf("APRIL: %d",APRIL);
		break;
	case MAY:
		printf("MAY: %d",MAY);
		break;
	case JUNE:
		printf("JUNE: %d",JUNE);
		break;
	case JULY:
		printf("JULY: %d",JULY);
		break;
	case AUGUST:
		printf("AUGUST: %d",AUGUST);
		break;
	case SEPTEMBER:
		printf("SEPTEMBER: %d",SEPTEMBER);
		break;
	case OCTOBER:
		printf("OCTOBER: %d",OCTOBER);
		break;
	case NOVEMBER:
		printf("NOVEMBER: %d",NOVEMBER);
		break;
	case DECEMBER:
		printf("DECEMBER: %d",DECEMBER);
		break;
	default:
		puts("No Month FOund.");
	}
	return 0;
}
