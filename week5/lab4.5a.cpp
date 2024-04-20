#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	float quater_1;
	float quater_2;
	float quater_3;
	float quater_4;
	
	float average;
	
	cout << "Please input your water bill for quarter 1:" << endl;
	cin >> quater_1;
	
	cout << "Please input your water bill for quarter 2:" << endl;
	cin >> quater_2;
	
	cout << "Please input your water bill for quarter 3:" << endl;
	cin >> quater_3;
	
	cout << "Please input your water bill for quarter 4:" << endl;
	cin >> quater_4;
	
	average = (quater_1 + quater_2 + quater_3 + quater_4)/4;
	
	cout << "Your average monthly bill is :  " << average << endl;
	
	if (average>75)
	cout << "Too much water is being used.";
	
	else if (average<=75 && average >=25)
	cout << "Typical amount of water is being used.";
	
	else if (average<25)
	cout << "Youve saved a lot of water.";
	
	return 0;
}