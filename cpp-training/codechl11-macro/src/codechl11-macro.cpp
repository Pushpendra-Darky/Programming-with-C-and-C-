/*
Define a Macro preprocessor directive that contains the code to find the area of a rectangle.

The Macro should accept two parameters: length and breadth of the rectangle.
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<iostream>
using namespace std;
#define AREA(l,b) (l)*(b)
int main() {

	cout << "Area Of Rectangle: " << AREA(5,4) << endl;
	return 0;
}
