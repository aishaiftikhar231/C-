#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	float GPA; 
	cout << "Enter your GPA"<< endl;
	cin >> GPA;
	
	if (GPA <=4 && GPA >=3.6)
	{
		cout << "Grade : A";
	}
	else if (GPA >= 3.5 && GPA <=3)
	{
		cout << "Grade : B";
	}
	else if ( GPA >= 2.9 && GPA <= 2.5)
	{
		cout << "Grade : C";
	}
	else if ( GPA <= 2.4 && GPA >= 2  )
	{
		cout << "Grade : D";
	}
	else 
	{
		cout << " FAIL";
	}
 
	return 0;
}