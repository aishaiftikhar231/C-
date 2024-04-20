#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int i; 
	int sum1=0;
	int sum2=0;
	int range;
	 
	 
	 cout << " enter range: " << endl;
	 cin >> range;
	
	while (range<0)
	{
	      cout << "invalid range. enter range again: " << endl;
	      cin >> range; 
	}
	
	for (i=1; i<=range; i++)
	 {
		if (i%2==0)
		{
			sum1= sum1 + i;
			
			}
			else 
			{
				sum2= sum2+i;
				
				
			}
			
		
		
	}
	cout<<"even sum: " <<sum1<<endl;
	cout <<"odd sum: "<< sum2;
	
	
		   
	return 0;
}