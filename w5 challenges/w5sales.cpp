#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int quantity;
	
	cout << "what are number of units sold?" << endl;
	cin >> quantity;
	if (quantity >0)
	{
	
	
	if (quantity >=10 && quantity <= 19) {
		cout << " the total is : "<< quantity * 99 * .80;
	}
	else if (quantity >=20 && quantity <= 49) {
		cout << " the total is : "<< quantity * .70 * 99;
	}
	else if (quantity >=50 && quantity <= 99) {
		cout << " the total is : "<< quantity * 99 * .60;
	}
	else if (quantity >=100) {
		cout << " the total is : "<< quantity * 99 * .50;
	}
}

    else 
      cout << "invalid input";
	
	return 0;
}