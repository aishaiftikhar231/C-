#include <iostream>

using namespace std;


int main(int argc, char** argv) {
	
	string a;
	string b;
	string c;
	float d;
	float e;
	float f;
	
	cout << "Write name of three months: ";
	cin>> a >> b >> c;
	
	cout << endl;
	
	cout << "write average rainfall for each month: ";
	cin >> d >> e >> f;
	
	float average= (d+e+f) /3;
	
	cout << "average rainfall: " << average;
	
		return 0;
}