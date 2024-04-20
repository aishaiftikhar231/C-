#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
float total = 0, rain;
int month=1;
cout << "Enter the total rainfall for month " << month << endl;
cout << "Enter -1 when you are finished" << endl;
cin >> month;




while (rain!=-1)
{
	total=total+rain;
month++;
cout << "Enter the total rainfall in inches for month "
<< month << endl;
cin >> rain;
cout << "Enter -1 when you are finished" << endl;

}



if (month == 1)
cout << "No data has been entered" << endl;
else
cout << "The total rainfall for the " << month-1;
cout<< " months is "<< total << " inches." << endl;
	return 0;
}