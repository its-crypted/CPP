#include <iostream>

using namespace std;

//Function overlading is a process of creating a same function having different parameter

void printNumber(int x) {
	cout << "I am printing an integer " << x << endl; 
}

void printNumber(float x) {
	cout << "I'm printing a float " << x <<endl;
}

int main()
{
	int a = 54;
	float b = 32.4896;

	printNumber(a);
	printNumber(b);

	return 0;
}
