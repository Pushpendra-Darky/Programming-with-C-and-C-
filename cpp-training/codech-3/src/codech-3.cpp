//Modify the following program to get each data as user input. Also, use appropriate user-friendly messages to improve the user experience.

#include <iostream>
#include <string>
using namespace std;


int main() {

    string name;
    char dollar;
    float gdp;
    int year;

    cout << "Enter The Country Name:\n";
    //cin >> name;  cin read till it have space so
    getline(cin,name);

    cout << "Enter The Currency Symbol:" << endl;
    cin >> dollar;

    cout << "Enter The GDP Rate:\n";
    cin >> gdp;

    cout << "ENter The Year:" << endl;
    cin >> year;

    cout << endl<<endl;
    cout << "As economic reforms picked up the pace, " << name << "'s GDP grew five-fold to reach US" << dollar << gdp <<" trillion in " << year << " (as per IMF estimates).";

    return 0;
}
