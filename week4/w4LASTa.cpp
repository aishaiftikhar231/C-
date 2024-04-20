#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
	float a;
	float b;
	float c;
	
	float d;
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "Please enter marks." <<endl;
	
	cout<< " marks 1: " << endl;
	cin>> a;
	
	cout << "marks 2: " <<endl;
	cin >> b;
	
	cout << "marks 3: " << endl;
	cin >> c;
	
	d= (a+b+c)/3;
	
	cout <<" the average marks are: " << d;
	
	return 0;
}