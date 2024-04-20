#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int shirts;
	
	cout << "enter number of shirts you purchased:" << endl;
	cin >> shirts;
	
	
     if (shirts>=5 && shirts<=10){
		cout<< shirts* .90 ;}
		
	else if (shirts>=11 && shirts<= 20 ){
		cout << shirts * .85;}
		
	else if (shirts>=21 && shirts<= 30){
		cout << shirts * .80; }
	
		else if (shirts > 31) {
			cout << shirts * .75 ;
		}
		else 
		cout << "invalid input";

		
		
		
	
	return 0;
}