#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int salary1= 1000;
	int salary2= 100;
	int i;
	int inc1;
	int inc2;
	
	while (salary2<salary1){
		
		int inc1= salary1*.2;
	    int inc2= salary2 *.5;
		
		if (i>0)
		{
			salary1= salary1+inc1;
	     	salary2 = salary2 + inc2;
	  	}
		
		i++;
		}
	
	cout <<"the number of years that person 2 will take to surpass person 1 are: " << i;
	return 0;
}