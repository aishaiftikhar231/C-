#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
float average; 

cout << "Input your average:" << endl;
cin >> average;

if (average>100)
{ cout << "Invalid input";}


 else if (average >= 60)
{
if (average>=90 && average <=100)
{
	cout << "A";
}
else if (average>=80 && average <=89){
	cout << "B";
}
else
cout << "You Pass" << endl;
}
 
 else 
{
cout << "You Fail" << endl;}




	
	return 0;
}