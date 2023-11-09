/*
Given the following program to find out the square root of a number ‘n’ entered by the user.

The square root of a number is always positive or 0.
Handle the exception when a user enters a negative value of ‘n’.
Note: In the given program, sqrt() function is being used which belongs to the cmath header file.

Code template
*/

#include <iostream>
#include <cmath>
using namespace std;


int main() {

    // Find square root of 'n' entered by the user.
    cout << "Program starts -->" << endl << endl;

    float n;

    cout << "Enter n: ";
    cin >> n;
    try {
    	if(n<0)
    	{
    		throw "Cannot be negative number...\n";
    	}

    float result = sqrt(n);
    cout << "Result: " << result << endl << endl;
    }  catch (const char *msg) {
		cout << msg << endl;
	}

    cout << "<-- Program ends" << endl;

    return 0;
}
