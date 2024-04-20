#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
const int PR_AD=10;
const int PR_CH=6;
const float PROFIT= .2;

int no_of_child;
int no_of_adults;

float total;
float th_per;
float dis_amt;
string movie_name;


cout << "what is the movie name: "<< endl;
getline (cin,movie_name) ;


cout << " how many children watched the movie?  ";
cin>> no_of_child;

cout << " how many adults watched the movie?  ";
cin>> no_of_adults;


total= (PR_AD*no_of_adults) + (PR_CH*no_of_child);
th_per= total*PROFIT;
dis_amt = total-th_per;


cout << setw(5) << "Movie Name: "<< setw(5) <<movie_name << endl;

cout << setw(5) << "the Gross profit is :           " <<setw(5) << total << endl;
cout << setw(5) << "the Net profit is :              " <<setw(5) << total*PROFIT <<endl;
cout << setw(5) << "the amount for distributor is : " <<setw(5) << dis_amt;

	return 0;
}