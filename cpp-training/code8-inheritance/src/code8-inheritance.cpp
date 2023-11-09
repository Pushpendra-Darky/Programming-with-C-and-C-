/*
Given the following program, apply inheritance to reduce code redundancy by creating a superclass Person.

Code template
*/

#include <iostream>
#include <string>
using namespace std;

class Inheritance{
	public:

	        int age;
	        string fullName;
	        string phoneNumber;
};
class Student : public Inheritance {

    public:
		int studentId;
		string schoolName;
        void study() {
            cout << "Studying" << endl;
        }
};

class Employee : public Inheritance {

    public:
			int employeeId;
        string companyName;
        void work() {
            cout << "Working" << endl;
        }
};

int main() {

	Student s1;
	s1.studentId = 1;
	s1.age = 25;
	s1.fullName = "Rahul Arora";
	s1.phoneNumber = "7530895954";
	s1.schoolName = "GBSSS";
	cout << s1.studentId <<endl<< s1.age<<endl << s1.fullName <<endl<< s1.phoneNumber <<endl<< s1.schoolName << endl;
	s1.study();

	Employee e1;
		e1.employeeId = 1;
		e1.age = 35;
		e1.fullName = "Rahul Arora";
		e1.phoneNumber = "7530895954";
		e1.companyName = "GBSSS";
		cout << e1.employeeId <<endl<< e1.age<<endl << e1.fullName <<endl<< e1.phoneNumber <<endl<< e1.companyName << endl;

		e1.work();
    return 0;
}
