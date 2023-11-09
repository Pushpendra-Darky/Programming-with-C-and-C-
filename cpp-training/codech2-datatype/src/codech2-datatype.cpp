/*
Write a program to print out: “As economic reforms picked up the pace,
India's GDP grew five-fold to reach US$2.2 trillion in 2015 (as per IMF estimates).”

You need to define separate variables for ‘India’, ‘$’, ‘2.2’, and ‘2015’.
Use appropriate data types for each literal and accordingly print the statement using corresponding format specifiers.

Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {

	string s1 = "As economic reforms picked up the pace,";
	char sym = '$';
	float rate = 2.2;
	int year = 2015;

	cout << s1 << " India's GDP grow five-fold to reach US" << sym << rate << " trillion in " << year << " (as per IMF estimates)." << endl;
	return 0;
}
