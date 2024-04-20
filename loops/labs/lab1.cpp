#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	char letter ;
	cout << "enter a letter. ";
	cin>> letter;
     while (letter != 'x');
  {
     cout << "Please enter a letter" << endl;
     cin >> letter;
     
  }
 
	cout << "The letter you entered is " << letter << endl;
	return 0;
}