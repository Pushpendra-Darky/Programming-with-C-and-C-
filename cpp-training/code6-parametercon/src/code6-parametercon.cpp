/*
Given the following program:

Add a parameterized constructor that initializes all the attributes during object creation.
Create dog objects by calling the parameterized constructor.
Code template
*/

#include <iostream>
#include <string>
using namespace std;

class Dog {

    public:
        string breed;
        int age;
        string color;
        string petName;

        void displayDetails();
        Dog(){
        	cout << "Default Constructor\n";
        }

        Dog(string,int,string,string);
};

Dog :: Dog(string breed,int age,string color,string petName) {
    this->breed = breed;
    this->age = age;
    this->color = color;
    this->petName = petName;
}

void Dog :: displayDetails() {
    cout << "Dog's Pet Name: " << petName << endl << "Breed: " << breed << endl << "Age: " << age << endl << "Color: " << color <<"\n\n";
}


int main() {

    Dog dog1("Dalmation", 7, "white-black", "jackie"); // parameterised constructor calling
    dog1.displayDetails();

    Dog dog2;    // default constructor
    dog2.breed = "Beagle";
    dog2.age = 4;
    dog2.color = "Brown";
    dog2.petName = "Pluto";
    dog2.displayDetails();

    return 0;
}
