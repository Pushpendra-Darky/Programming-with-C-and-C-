/*
WAP to create a class for the dog (maybe a pet dog).

Define data members such as age, color, breed, and it’s pet name.
Define a function to print all the data members.
Declare two objects for the class Dog, initialize their attributes and then print all the data members by calling a function.
Note: Code and execute this challenge in your Eclipse IDE.
*/

#include<iostream>
#include<string>
using namespace std;

class Dog {

	public:
		int age;
		string name;
		string color;
		string breed;

		string OneLine(){        // method inside a class
			return name + " " + color;
		}

		void displayDetails();  // method declaration/prtotype, method outside class
};

void Dog::displayDetails(){    // method definition
	cout << "Age: " << age << endl << "Name: " <<  name << endl << "color: " << color << endl << "Breed: " << breed <<endl;
}

int main(){

	Dog d1;  // creating object
	d1.age = 10;
	d1.name = "jacky";
	d1.color = "White";
	d1.breed = "Asian";
	string one = d1.OneLine();   //
	cout << one << endl;
	d1.displayDetails();

	Dog d2;
	d2.age = 12;
	d2.name = "Bolt";
	d2.color = "Black";
	d2.breed = "Asian";
	d2.displayDetails();
	return 0;
}
