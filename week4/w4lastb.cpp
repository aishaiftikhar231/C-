#include <iostream>
#include<iomanip>

using namespace std;

int main(int argc, char** argv) {
	
	float p1= 85.0;
	float p2= 57.50;
	float p3= 127.75;
	
	
cout << setw(10)<< "style" << setw(29) << "price" << endl<< endl;
cout << setw(10)<< "American Colonial" << setw(22) << "$ 85.00" << endl;
cout << setw(6)<< "Modern" << setw(33) << "$ 57.50" << endl;
cout << setw(10)<< "French Classical" << setw(23) << "$127.75" << endl << endl<<endl;
	
	int q1;
	int q2;
	int q3;

	
	float s1;
	float s2;
	float s3;
	float t;
	cout << " please enter number of American Colonial sold  ";
	cin>>q1;
	
	cout << " please enter number of Modern sold  ";
	cin>> q2;

	cout << " please enter number of French Classical sold  ";
	cin>> q3;
	
	s1= p1*q1;
	s2=p2*q2;
	s3=p3*q3;
	t= s1+s2+s3;
	
	cout << "\n\n The total sales of American Colonial: " <<s1 << endl;
	cout << " The total sales of Modern chairs " << s2 << endl;
	cout << "The total sales of French Classical chairs " << s3 << endl;
	cout << "\n\n The total sales of all chairs " << t <<endl;
	return 0;
}