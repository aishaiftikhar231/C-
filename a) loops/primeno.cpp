#include <iostream>


using namespace std;
int main(int argc, char** argv) {
	
	int N;
	int i;
	bool prime=true;
	
	
	
	
	
	
	 N=10;
	
	
	for (i=1; i< N; i++)
	{
		
		if (N%i==0)
		{
			 prime = false;			
		}
		 
	} 	
		 if ( prime==true)
		 {
		 	cout << N << " , ";}
	
	
		 
	return 0;
} 






