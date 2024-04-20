#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	
	int quantity;
	float itemPrice;
	float totalBill;
	string item;
	
	cout << setprecision (4) << fixed << showpoint;
	
	 cout << "Name of item: " <<endl;
	 getline(cin,item);
	
	
	cout << "What are total number of items?" << endl;
	cin >> quantity; 
	
	cout << "What is the price for each item?" <<endl;
	cin >> itemPrice;
	
	totalBill = quantity*itemPrice;
	
	cout << "The total bill: " << totalBill <<endl;
	
	
	
	
	return 0;
}