/*
Write a program to store details of a book using Structure. The details of the book should contain:

Title
Author
Price
Define the details of any two of your most favourite books that you have read.

Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<stdio.h>
#include<string.h>
struct Books {
	char title[20];
	char author[30];
	float price;
};
struct Books b1,b2;

int main() {

	strcpy(b1.title,"C");
	strcpy(b1.author, "Ritchie");
	b1.price = 100.00;

	strcpy(b2.title,"Let Us C");
	strcpy(b2.author, "Yaswant Kanetkar");
	b2.price = 200.00;

	printf("Books Details:\n");
	printf("Book Title: %s\nBook Author: %s\nBook Price: %f\n",b1.title,b1.author,b1.price);
	printf("Book Title: %s\nBook Author: %s\nBook Price: %f\n",b2.title,b2.author,b2.price);

	return 0;
}
