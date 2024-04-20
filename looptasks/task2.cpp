#include <iostream>
using namespace std;
int main (){
	
	int floors;
	int rooms;
	int roomsocc;
	int totrooms=0;
	float totroomsocc=0;
	float perc;
	
	cout << "what are the total number of floor: "<<endl;
	cin>> floors;
	
	int i=1;
	
	for (i=1;i<=floors;i++)
	{
		if (i==13)
		{
			cout << "skipping floor 13"<< endl;
			continue;}
			
		
		
		cout << "what are the total number of rooms in floor :  "<< i<<endl;
	    cin>> rooms;
	    cout << "what are the total number of rooms occupied in floor :  "<< i <<endl;
       	cin>> roomsocc;
       	
       	
       	
       	totrooms= totrooms+ rooms;
       	totroomsocc= totroomsocc + roomsocc;
	
		
		
	} 
	cout << "the total numb of rooms are : " <<totrooms <<endl;
	cout << "the total numb of rooms occupied are : "<<  totroomsocc <<endl;
	
	float percentage= (totroomsocc / totrooms) * 100;
	int unoccrooms=   totrooms- totroomsocc ;
	
	cout << " total unoccupied rooms are : "<< unoccrooms<< endl; 
	
	cout << "percentage of occupied roooms is : " << percentage << "%";


	return 0;
}