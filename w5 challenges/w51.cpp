#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a;
	int b;
	
	cout << "Enter value 1: ";
	cin>> a;
	
	cout << "Enter value 2: ";
	cin>> b;
	
	if (a>b)
	{
		cout << "value 1 is greater than value 2 ";
	}
	else if (a<b)
	{
		cout << "value 2 is greater than value 1 ";
	}
	else 
	{
		cout << "invalid input";
	}
	return 0;
}