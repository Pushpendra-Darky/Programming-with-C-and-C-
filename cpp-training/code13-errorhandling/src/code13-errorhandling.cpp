/*
The following program contains multiple compile time errors. Spot the errors and fix them.

Approach:

First, paste the faulty in Eclipse IDE and check for warning/messages being shown in the editor.
Next, run the program. Since it has compile time errors,
the execution of the program will stop and it will show you compile time errors as messages under problems tab and console tab.
Analyze those messages and fix the errors.
Dirty code

*/

#include <iostream>
#include <string>
using namespace std;

class Employee {

    private:
        string phNo;

    public:
        string name;

        void setPhoneNumber(string phoneNumber) {
            this->phNo = phoneNumber;
        }
       friend void display(Employee);
};

void display(Employee emp) {
    cout << "Employee name: " << emp.name << ", Phone: " << emp.phNo << endl;
}


int main() {

    Employee employee;
    employee.setPhoneNumber("+91-809362221");
    employee.name = "Rishi Raj";

    display(employee);

    return 0;
}
