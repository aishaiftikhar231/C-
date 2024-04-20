#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
	
	float price1;
	float price2; 
   int quantity1;
   int quantity2; 
 

cout << "Please input the price and quantity of the first item" << endl;


cout << "please input price and quantity of first item : " << endl;
cin >> price1 >> quantity1;

cout << "please input price and quantity of second item : " << endl;
cin >> price2 >> quantity2;

cout << setw(5) << "PRICE   " << setw(5) << "QUANTITY "<< endl;
cout<< setw(5) << price1 << setw(5) << quantity1 << endl;
cout << setw(5)	<< price2 << setw(5) << quantity2;
	
	return 0;
}