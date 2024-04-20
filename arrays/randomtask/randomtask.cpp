#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
	
	int students[20];
	int range1=0, range2=0, range3=0, range4=0, range5=0;
	
	int lb = 1, ub = 50;
    srand(time(NULL));
	
		for(int i=1;i<=20;i++)
	{
	    students[i] = lb + (rand() % ub);
    }
     
	 
	 for (int i =1; i<=20; i++){
	 	
	 	if (students[i] > 0 && students[i] <11 ) {
	 		
	 		range1++;
	 		
		 }
		 
		 
		 	if (students[i] > 10 && students[i] <21 ) {
	 		
	 		range2++;
	 		
		 }
		 
		 	if (students[i] > 20 && students[i] <31 ) {
	 		
	 		range3++;
	 		
		 }
		 
		 	if (students[i] > 30 && students[i] <41 ) {
	 		
	 		range4++;
	 		
		 }
		 
		 	if (students[i] > 40 && students[i] <51 ) {
	 		
	 		range5++;
	 		
		 }
	 	
	 }
	 
	 for (int j=1; j<=21; j++){
	 	
	 	cout << "the marks of stdent " << j << " are : "<< students[j] << endl;
	 }
	  cout <<endl <<endl;
	 cout << "Students who scored from 0-10 are : " << range1<<endl;
	 cout << "Students who scored from 11-20 are : " << range2<<endl;
	 cout << "Students who scored from 21-30 are : " << range3<<endl;
	 cout << "Students who scored from 31-40 are : " << range4<<endl;
	 cout << "Students who scored from 41-50 are : " << range5<<endl;
	 
	cout<<endl;
	  
	  
	   cout << "represntation in form of bar :" << endl;
	 
	 cout << "Students who scored from 0-10 are : ";
	 for (int i = 0; i < range1 ; i++)
        cout << '*';
        cout <<endl;
    
	cout << "Students who scored from 11-20 are : ";
	for (int i = 0; i < range2 ; i++)
        cout  << '*';
        cout<<endl;  
		
		
	cout<< "Students who scored from 21-30 are : ";	
    for (int i = 0; i < range3 ; i++)
        cout << '*';
        cout<<endl;
	
	cout<< "Students who scored from 31-40 are : ";	
	for (int i = 0; i < range4 ; i++)
       cout  << '*';
        cout<<endl;	
		
		
	 cout << "Students who scored from 41-50 are : ";	
	for (int i = 0; i < range5 ; i++)
       cout  << '*';
        cout<<endl;			  
        

    cout << endl;
	
	return 0;
}