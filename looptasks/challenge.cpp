#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int numb, i, sum=0;
	cout << "input a number: "<<endl;
	cin >> numb;
	
	while (numb>0)
  {
		i=numb%10;
    	sum= sum+i;
	   
	    numb=numb/10;
  }
	
	cout << sum;
	

	
	return 0;
}