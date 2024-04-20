#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	int v1 =5 ;
	int v2 = 10;
//	cout << "value 1: "<< endl;
//	cin>> v1;
//	
//	cout << "value 2: " << endl;
//	cin >> v2;
//	
//	
//	v1= v1+ v2;
//	v2 = v1-v2;
//	v1= v1-v2;
//	
//	cout << v1;


int *pointx=&v1;
int *pointy= &v2;



int *pointz = pointx;
pointx = pointy;
pointy = pointz;


cout<< *pointx << endl;
cout << *pointy;







	return 0;
}