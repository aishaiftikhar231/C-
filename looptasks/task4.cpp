#include <iostream>
#include <ctime>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int lb = 1, ub = 100;
	int mynumb, guess ,count=1;
	

	srand(time(NULL));
	cout<<"enter a number between 0-100 and we will tell u if u guessed right!";
	cin>>mynumb;
	guess= lb + (rand() % ub) ;
	
	while (guess!=mynumb){
		
	
	//cout << lb + (rand() % ub) << "  ";
	
	if (guess== mynumb)
	 
	 cout << "you win";
	else if (guess>mynumb)
 	cout << "the numb is greater than ur guess, try again"<< endl;
	else
	cout << "the numb is smaller than ur guess, try again"<<endl;
	
	
	cout << " what is ur number"<< endl;
	cin >> mynumb;
	
	 
	 
	 count++;
	

    } 
    cout << "correct guess!"<<endl;
    
    cout<< "you took "<< count << "tries.";
   

	return 0;
}