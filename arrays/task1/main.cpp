#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int array[3];
	int highest=NULL;
	
	for(int i=1;i<4;i++)
	{
		cout<<"enter ur array elements:";
		cin>>array[i];
		if(highest<array[i])
		highest=array[i];
		
		if(lowest>array[i])
		lowest= array[i];
	}
	cout<<"highest ="<<highest;
	
	
	return 0;
}