#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


float totalbill(float service, float test);
float totalbill(float service, float test, float medicine);



int main(int argc, char** argv) 
{
	int input;
	float service;
	float test;
	float medicine;
	cout<<"Please input 1 if you are a member of the dental plan\n Input any other number if you are not."<<endl;
	cin>>input;
	if(input==1)
	{
		cout<<"Please input service charges"<<endl;
		cin>>service;
		cout<<"Please input test charges"<<endl;
		cin>>test;
		totalbill(service, test);
	}
	else
	{
		cout<<"Please input service charges"<<endl;
		cin>>service;
		cout<<"Please input test charges"<<endl;
		cin>>test;
		cout<<"Please input medicine charges"<<endl;
		cin>>medicine;
		totalbill(service, test, medicine);
	}
	
	return 0;
}

float totalbill(float service, float test)
{
	cout<<"The total bill is "<<service+test<<"$"<<endl;
	return 0;
}

float totalbill(float service, float test, float medicine)
{
	cout<<"The total bill is "<< service+test+medicine <<"$"<<endl;
	return 0;
}