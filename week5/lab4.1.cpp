#include <iostream>
using namespace std;

int main(int argc, char** argv)
{


int num1;
int num2 ; 

cout << "Please enter an integer" << endl;
cin >> num1;

cout << "Please enter another integer" << endl;
cin >> num2;

cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

if (num1 == num2) 
{
cout << "The values are the same";
cout << "Hey, that is a coincidence!" ; 

}


else
{
cout << "The values are not the same"; }

	
	
	return 0;
}