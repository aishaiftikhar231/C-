#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int rain;
	int total=0;
	int avg;
	
	int i;
	
	for (i=1; i<=12; i++)
	{
		cout << "enter average rainfall for month" << i << endl;
		cin >> rain;
		
		total = total + rain;
	}
	
	avg = total / (i-1);
	
	cout << "the avg rainfall is : " << avg;
	
	return 0;
}