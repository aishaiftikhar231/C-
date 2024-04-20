#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int bank_charges=10;
	float check;
	float check_amnt;
	
	cout << " number of checks?" << endl;
	cin >> check ;
	
	if (check>0)
	{
	
	if (check < 20) {
		
		check_amnt= check * .1;
	}
	else if (check > 20 && check<=39) {
		check_amnt= check * .08;
	}
	else if (check >=40 && check <= 59) {
		check_amnt= check  * .06;
	}
	else if (check >= 60) {
		check_amnt= check * .04;
	}
	    
		float bank_balance;
		
	
	cout << " enter bank balance " << endl;
	cin >> bank_balance;
	float total = bank_charges + check_amnt ;
	
	float total2 = bank_charges + check_amnt + 15;

	
	if ( bank_balance >= 400) {
		
		cout << " your bank charges are : " << total;
	}
	else {
		cout << " your bank charges are : " << total2;
	}
}
	else 
	cout << " invalid input";

	
	
 
	
	
	
	return 0;
}