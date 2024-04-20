#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	
    float totalSal=0;
	int totalDays;
	int day=1;
	int sal1=1;
	int saleachday;
	cout << "what were total number of days: "<< endl;
	cin>> totalDays;
	if (totalDays > 1) {
	
	while (day<=totalDays) 
	{
		saleachday = sal1*2;
		totalSal = totalSal + saleachday ;
		cout << "the salary on day " << day << " is : " <<saleachday<< endl ;
		sal1=saleachday;
		day++;
		
	}
	  float salaryindollars = totalSal/100;
	
	  cout <<"the total salary in pennies will be : " << totalSal << endl;
	  cout <<"the total salary in dollars will be : " << salaryindollars;
	  
	  
    }
	return 0;
}