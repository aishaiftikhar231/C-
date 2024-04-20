#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float MilesToKiloMeter(float miles);
float KiloMeterToMiles(float kilometers);

int main(int argc, char** argv) 
{
	float miles;
	float kilometers;
	int input;
	
	
	cout<<"Please input \n";
	cout<<"1 Convert Miles to Kilometers\n";
	cout<<"2 Convert Kilometers to Miles\n";
	cout<<"3 Quit\n";
	cin>>input;
	
	if(input==1)
	{
		cout<<"Please input miles to be converted"<<endl;
		cin>>miles;
		MilesToKiloMeter(miles);
	}
	else if (input == 2)
	{
		cout<<"please input kilometers to be converted"<<endl;
		cin>>kilometers;
		KiloMeterToMiles(kilometers);
	}
	
	else if (input == 3)
	{
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
}



float MilesToKiloMeter(float miles)
{
	float kilometers;
	kilometers=miles*1.61;
	cout<<miles<<" miles = "<<kilometers<<" kilometers";
	return 0;
}


float KiloMeterToMiles(float kilometers)
{
	float miles;
	miles=kilometers*.621;
	cout<<kilometers<<" kilometers = "<<miles<<" miles";
	return 0;
}