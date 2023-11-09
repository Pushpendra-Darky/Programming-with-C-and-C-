/* In Eclipse IDE, write a program to define 4 variables for int, long, float, and double
 	 Assign random values to these variables and print their values
 	 using respective format specifiers until you get an error while running the application
	For example, assigning a very huge value to long will result in an error
	long x = 7823782378667523565;  // Error
	Similarly, test for int, float, and double with unusual values
*/
#include<stdio.h>
int main(){

	int val=7000;
	long val2= 5555555;

	printf("Sizeof Int %d\nSizeof Long %d\nval %d\nval2 %ld",sizeof(val),sizeof(val2),val,val2);
	return 0;
}
