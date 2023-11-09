/*
Write a program to store details of a book using Union and print the details. The details of the book should contain:

Title
Author
Price
Define the details of any two of your most favourite books that you have read.

Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>
#include<string.h>

union Book {

	char title[20];
	char author[20];
	float price;
};

union Book b1,b2;

int main() {

	strcpy(b1.title, "C");
	printf("Book Title: %s\n", b1.title);
	strcpy(b1.author, "K&r");
	printf("Book Author: %s\n", b1.author);
	b1.price = 200;
	printf("Book Price: %.2f\n\n", b1.price);

	strcpy(b2.title, "Let Us C");
	printf("Book Title: %s\n", b2.title);
	strcpy(b2.author, "Yaswant kanatkar");
	printf("Book Author: %s\n", b2.author);
	b2.price = 200;
	printf("Book Title: %.2f\n", b2.price);

	return 0;

}
