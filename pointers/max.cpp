#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int size = 10;
	int *ptr;
	int myarray[size]= {10,5687,76,2349,987,987,567,890,7888,1000};
	ptr= myarray;
	
	int high=0;
	int i=0;
	int low=0;
	
	
	for (i = 1; i <10; i++)
	{
		
		if (high<myarray[i]){
			
			high=myarray[i];
		}
		}	
       cout << high;
       cout << &high;
	return 0;
}