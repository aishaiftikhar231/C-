#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void convertMulti (float dollars, float& euros, float& pesos);
void convertMulti (float dollars, float& euros, float& pesos, float& yen);
float convertToYen (float dollars);
float convertToEuros (float dollars);
float convertToPesos (float dollars);

float const euro=1.06;
float const pesos=9.73;
float const yen=124.35;


int main() 
{
	float dollars;
	float euros;
	float pesos;
	float yen;
	
	cout << fixed << showpoint << setprecision(2);
	
	cout << "Please input amount of American Dollars you want converted" << endl;
	cout<<"to euros and pesos" << endl;
	cin>>dollars;
	convertMulti(dollars, euros, pesos);
	cout<<"The inputted USD convert into "<<euros<<" Euros and "<<endl;
	cout<<pesos<<" Pesos."<<endl;
	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;
	convertMulti(dollars, euros, pesos, yen);
	cout<<"The inputted amount of USD convert into "<<euros<<" Euros, "<<endl;
	cout<<pesos<<" Pesos, and "<<endl;
	cout<<yen<<" Yen."<<endl;
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" <<endl;
	cin >> dollars;
	convertToYen(dollars);
	
	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;
	convertToEuros(dollars);
	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;
	convertToPesos(dollars);
	
	
	
	return 0;
}



void convertMulti(float dollars, float& euros, float& pesos)
{
	euros=dollars*0.93;
	pesos=dollars*19.11;
}

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	yen=dollars*132.25;
	euros=dollars*0.93;
	pesos=dollars*19.11;
}

float convertToYen(float dollars)
{
	float x;
	x=dollars*yen;
	cout<<"The inputted USD convert into "<<x<<" Yen."<<endl;
	return 0;
}

float convertToEuros(float dollars)
{
	float x;
	x=dollars*euro;
	cout<<"The inputted USD convert into "<<x<<" Euros."<<endl;
	return 0;
}

float convertToPesos(float dollars)
{
	float x;
	x=dollars*pesos;
	cout<<"The inputted USD convert into "<<x<<" Pesos."<<0endl;
	return 0;
}