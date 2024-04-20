#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int conversion(int , char );
int main(int argc, char** argv) {
	int b;
	char c;
    b= conversion( int a, char c);
    cout << b;
	return 0;
}

int conversion(int a, char c){
	
	cout << "do u want to convert"<<endl<< "miles to km (enter M)"<< endl << "km to miles(enter K)"<< endl;
	cin >> c;
	cout << "what are numb of miles: "<<endl;
	cin>> a;
	
	
	if (c==M){
		a= a*0.621
		
	}
	else {
		a=a/1.6;
		
	}
	return a;
	}