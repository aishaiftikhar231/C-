#include <iostream>

using namespace std;

int main(int argc, char** argv) {
int GPA;
cout<< " enter";
cin >> GPA;


	
		if (GPA<=4&& GPA >= 3.6){
			cout << "grade A+";
		} 
	
	
     	else if (GPA >= 3.5 && GPA <= 3.9){ 
	
	      cout << "grade A";
	}
	else if (GPA >=3.4 && GPA <= 3){
		
		cout << " grade B";
	}
	else if (GPA<=2.9 && GPA >= 2.5 ){
		
		cout << "grade C";
	}
	else if (GPA <= 2.4 && GPA >=2 ) {
		cout << " grade D";
	}
	else { 
	cout << "You fail.";
	}
	
	return 0;
}