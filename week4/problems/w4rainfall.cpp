#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
 int total_students=30;
int f;
int m;

cout << " Enter number of female students: ";
cin>> f;
cout << " enter number of male students: ";
cin >> m;


float per_female = ( static_cast<float>(f) /total_students) *100;

cout << " percentage of female students: " << per_female << "%";


float per_male = ( static_cast<float>(m)/total_students) *100 ;

cout << " percentage of male students: " << per_male << "%";
	return 0;
}