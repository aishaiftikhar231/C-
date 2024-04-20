#include <iostream>
#include <iomanip>

using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main(int argc, char** argv) {
	

	
	float batAvg;
batAvg = static_cast<float>(HITS) / AT_BAT; 

	cout << setprecision(6) << fixed << showpoint;
cout << "The batting average is " << batAvg << endl;


	return 0;
}