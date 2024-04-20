#include <iostream>
using namespace std;


int length=8;
int width=3;

int main(int argc, char** argv) {
	
int perimeter;
int area;

area= length*width;
perimeter = 2*(length+width) ;

cout << "the area of rectangle : " << area << endl;
cout << "the perimeter of rectangle : " << perimeter << endl;


	
	return 0;
}