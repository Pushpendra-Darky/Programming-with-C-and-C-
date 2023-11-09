/*	Author:	Pushpendra
 * 	Module:	C
 * 		Write a program to print: “As economic reforms picked up the pace,
 * 		India's GDP grew five-fold to reach US$2.2 trillion in 2015 (as per IMF estimates).”
 * 		You need to define separate variables for ‘India’, ‘$’, ‘2.2’, and ‘2015’.
 * 		Use appropriate data types for each literal and accordingly print the statement using corresponding format specifiers.
 * 		Note: Code and execute this challenge in your Eclipse IDE.
 */

#include<stdio.h>
int main(){
	char country[10] = "India";
	char currency = '$';
	float rate = 2.2;
	int year = 2015;
	printf("As economic reforms picked up the pace, %s's GDP grew five-fold to reach US%c%.1f trillion in %d (as per IMF estimates).",country,currency,rate,year);

	return 0;
}
