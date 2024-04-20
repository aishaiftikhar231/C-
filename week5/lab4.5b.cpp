#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int shirts;
	int price=12;
	
	cout << "enter number of shirts you purchased:" << endl;
	cin >> shirts;
	
	
     if (shirts>=5 && shirts<=10)
	   {
		cout<< "total bill: " <<shirts* .90 * price ;
		}
		
     else if (shirts>=11 && shirts<= 20 )
	    {
		cout << "total bill: " << shirts * .85 * price;
		}
		
	else if (shirts>=21 && shirts<= 30)
	    {
		cout << "total bill: "  << shirts * .80 * price; 
		}
	
		else if (shirts > 31)
		{
			cout << "total bill: " << shirts * .75 *price ;
		}
		
		else 
		cout << "invalid input";

		
		
		
	
	return 0;
}