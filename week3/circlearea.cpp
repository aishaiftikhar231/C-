#include <iostream>

using namespace std;
const double PI = 3.14;
const double r= 5.4;

int main(int argc, char** argv) 
	
	
{
int area;
int circumference;

circumference = 2 * PI * r; 
area = PI * (r*r); 

cout << "the circumference of cirle : " << circumference << endl;
cout << " the area of circle : " << area;

	
	return 0;
}