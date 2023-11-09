/*
Write a program to save your name and age in the given format in a file.
Your name and age should be taken as user input. Once you write data on the file,
write code to read data from the file and print the data in the output console.

My name is Rahul.
I am 20 years old.

Note: Code and execute this challenge in your Eclipse IDE.
*/
#include<fstream>
#include<iostream>
using namespace std;

int main(){
	string name;
	int age;

	cout<<"Enter The Name:\n";
	getline(cin,name);

	cout<<"Enter The Age:" << endl;
	cin >> age;

	ofstream ofile;   // creating file object for writing

	ofile.open("details.txt"); // creating  and openning file

	ofile << name << endl << age << endl; //writig to file

	ofile.close();  //closing the file

	// reading the file

	string str;

	ifstream rfile;

	rfile.open("details.txt");

	cout<<"Reading Data from file\n";

	while(!rfile.eof()){
		getline(rfile,str);
		cout << str <<endl;
	}
	rfile.close();

	return 0;
}
