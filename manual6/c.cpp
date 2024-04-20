#include <iostream>
#include <iomanip>
using namespace std;

void calNetPay(float& net, int hours=40, float rate=6.00);
int main()
{
int hoursWorked = 20;
float payRate = 5.00;
float pay; 
cout << setprecision(2) << fixed << showpoint;
calNetPay(pay);
cout << "The net pay is $" << pay << endl;
return 0;
}
void calNetPay(float& net, int hours, float rate)
{
net = hours * rate;
}