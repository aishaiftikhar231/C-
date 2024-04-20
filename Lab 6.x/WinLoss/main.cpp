#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float wins();
float losses();
float rate(float W, float L);

float W;
float L;
float r8;


int main(int argc, char** argv) 
{
	
	cout<<fixed<<setprecision(2);
	
	 wins();
	
	 losses();
	
	 rate(W, L);
	
	
	
	return 0;
}



float wins()
{
	cout<<"Please input the number of wins"<<endl;
	cin>>W;
	return W;
}

float losses()
{
	cout<<"Please input the number of losses"<<endl;
	cin>>L;
	return L;
}

float rate(float, float)
{
	float T=W+L;
	r8=(W/T)*100;
	cout<<"The percentage of wins is "<<r8<<endl;
	return 0;
}