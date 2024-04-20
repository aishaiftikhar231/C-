#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	char c;
	float a=7;
	float b=8;
	
	cout << "what operation do u want to use?" << "\n + - * /";
	cin>> c;
	
	if  (c== '+')
	{
		cout <<"sum" << 'a+b';
		}
	else if (c== '-')
	{
		cout <<"difference" << 'a-b';
	}
		
		else if (c== '*')
		{
			cout <<"multiplication" << 'a*b';
		}
			
			else if (c== '/')
			{
				cout << "dividion" << 'a/b';
			}
		
	
	return 0;
}