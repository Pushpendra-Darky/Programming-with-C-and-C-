/*
Write a program to print your name and age in the following format in two separate lines:

My name is Rahul.
I am 20 years old.

Replace "Rahul" with your full name and put your age in place of "20". Try printing the same statements in two ways:

By using ‘\n’
By using ‘endl’
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<iostream>
using namespace std;

int main(){

	cout << "My Name Is Pushpendra\nI am 27 years old.";

	cout << endl << endl; // adding more newlines

	cout << "My Name Is Pushpendra" << endl << "I am 27 years old." << endl;

	return 0;
}
