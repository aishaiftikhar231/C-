#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
		
	int v1;
	int v2 ;
	cout << "value 1: "<< endl;
	cin>> v1;
	
	cout << "value 2: " << endl;
	cin >> v2;
	
	
	v1= v1+v2;
	v2 = v1-v2;
	v1= v1-v2;
	
	cout << v1<<endl;
	cout << v2;
	return 0;
}