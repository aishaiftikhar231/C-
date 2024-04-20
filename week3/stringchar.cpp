#include <iostream>

using namespace std;

const string FAVORITESODA = "Dr. Dolittle";
const char BESTRATING = 'A';

int main(int argc, char** argv) {
	
char rating = 'B';
string favoriteSnack = "crackers" ; 
int numberOfPeople= 250; 
int topChoiceTotal= 148;


cout << "The preferred soda is " << FAVORITESODA << endl;
cout << "The preferred snack is " << favoriteSnack << endl;
cout << "Out of " <<numberOfPeople << " people " <<topChoiceTotal << " chose these items!" << endl;
cout << "Each of these products were given a rating of " << BESTRATING << " from our expert tasters" << endl;
cout << "The other products were rated no higher than a " << rating << endl;

	
	
	return 0;
}
