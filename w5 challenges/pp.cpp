#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int a;
	int b;
	
	char c;
	
	cout << "enter numb 1" << endl;
	cin >> a;
	
	cout << "enter numb 2" << endl;
	cin >> b;
	
	cout << "enter an operator" << endl;
	cin >> c;
	
	if (c == '+')
	{ 
	   if (a>=b){
	   	cout << a+b;
	   }
	  
	
	else if (c =='-')
	{
		if (a>=b)
		{
	   	cout << a-b;
	    }
		 else 
	   	cout << b-a;
	   	
	}
	
	else if (c =='*')
	{
		cout << a*b;
	}
	
	else if (c == '/')
	{
		if (a>=b)
		{
	   	cout << a/b;
	    }
		 else 
	   	   cout << b/a;
	
	}
	
	else if (c == '%')
	{
		if (a>=b)
		{
	   	cout << a%b;
	    }
		 else 
	      cout << b%a;
	   
	}
	
	
	return 0;
	}