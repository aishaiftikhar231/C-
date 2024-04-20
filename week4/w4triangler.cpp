#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
	
	float a; 
	float b; 
  float hyp; 

cout << setprecision(2) << fixed << showpoint;

cout << "Please input the value of the two sides" << endl;
cin >> a >> b;


cout << "The sides of the right triangle are " << a << " and " << b << endl;
hyp = sqrt(  pow(a,2) + pow (b,2) );

cout << "The hypotenuse is " << hyp << endl;
	return 0;
}