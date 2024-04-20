#include <iostream>
#include <random>
#include<ctime>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() 

{
	
	int size, marks,sum;
	int maximum = 0; int minimum = -1;
	// frequency array for saving the frequency of the students marks
	int frequency[8] = {0,0,0,0,0,0,0,0} ;
	cout<<"Enter the number of students  : \n";
	cin>>size; // for the number of students
	int midMarks[size];
	int finalMarks[size];
	int totalMarks[size];
	int index = -1;  // this for the minimum and maximum index in the total marks
	
	// using srand function and passing the time parameter
	srand(time(0));
	
	for(int count = 0; count < size; count++)
	{
		//cout<<"Enter the marks of midterm of ["<<count<<"] = ";
		midMarks[count] = 0 + (rand() % 30); // midterm marks are adding in array
	//	cout<<"Enter the marks of finalterm of ["<<count<<"] = ";
		finalMarks[count] = 0 + (rand() % 50); // final term marks are adding in array
		totalMarks[count] = midMarks[count]+finalMarks[count];  // both mid and final marks are adding to be total
	}
	
	
	cout<<"the mid term marks list is \n ";
	// for mid term marks to be print
	for(int i =0; i < size ; i ++)
	{
		cout<<midMarks[i]<<"\t";
	}
	cout<<"\n";
	
	
	cout<<"the final marks list is \n";
	// final marks are printing
	for(int i =0; i < size ; i ++)
	{
		cout<<finalMarks[i]<<"\t";
	}
	cout<<"\n";
	
	// finging the frequency of the total marks
	
	for (int i = 0; i < size; i ++)
	{
		if(totalMarks[i] >=0 && totalMarks[i]<=10 )
		{
			frequency[0] = frequency[0] + 1; 
		}
		else
		
		if(totalMarks[i] >=11 && totalMarks[i]<=20 )
		{
			frequency[1] = frequency[1] + 1; 
		}
		else
		if(totalMarks[i] >=21 && totalMarks[i]<=30 )
		{
			frequency[2] = frequency[2] + 1; 
		}
		else
		if(totalMarks[i] >=31 && totalMarks[i]<=40 )
		{
			frequency[3] = frequency[3] + 1; 
		}
		else
		if(totalMarks[i] >=41 && totalMarks[i]<=50 )
		{
			frequency[4] = frequency[4] + 1; 
		}
		else
		if(totalMarks[i] >=51 && totalMarks[i]<=60 )
		{
			frequency[5] = frequency[5] + 1; 
		}
		else
		if(totalMarks[i] >=61 && totalMarks[i]<=70 )
		{
			frequency[6] = frequency[6] + 1; 
		}
		else
		if(totalMarks[i] >=71 && totalMarks[i]<=80 )
		{
			frequency[7] = frequency[7] + 1; 
		}
		
	}
	
	
	
	// total marks list are printing here
	cout<<"the total marks list is \n";
	
	for(int i =0; i < size ; i ++)
	{
		cout<<totalMarks[i]<<"\t";
	}
	cout<<"\n";
	
	cout<<"======================================================================\n";
	cout<<"student"<<"\t\t"<<"mid\t\t "<<"final\t\t"<<"total"<<"\n";	
	cout<<"======================================================================\n";
	
	// outing the list
	for (int i = 0; i < size ; i ++ )
	{
		cout<<"student-"<<i<<""<<"\t"<<midMarks[i]<<"\t\t"<<finalMarks[i]<<"\t\t"<<totalMarks[i]<<"\n";
	}
	
	// print out the frequency array
	cout<<"the frequency of the total marks is : \n";
	for (int i = 0; i < 8 ; i ++ )
	{
		cout<<"\t\t"<<frequency[i]<<"\n";
	}
	
	// print the # graph from the frequency array
	
	for (int i = 0 ; i < 8; i++)
	{
		if(frequency[i]!=0)
		{
			for (int j = 0 ; j < frequency[i]; j ++)
			{
				cout<<"# ";
			}
		}
		else
		{
			cout<<"0"; 
		}
		cout<<endl;
	}

	
	// finding the maximum and minimum index of the total marks
	
	//finding highest value
	
	for (int i = 0 ; i < size; i ++ )
	{
		if(totalMarks[0] < totalMarks[i])
		{
			totalMarks[0] = totalMarks[i];
		}
	}
	
	cout<<"\n the highest marks is : "<<totalMarks[0]<<"\n";
	//  finding the index of the highest marks  in the totalmarks array
	
	for (int i = 0 ; i <size ; i ++)
	{
		if (totalMarks[i]== totalMarks[0])
		{
			index = i;	
		}
	}
	cout<<"the highest marks index is : "<<index<<" "<<"\n";
	
	
	// finding the lowest marks	
	for (int i = 0 ; i < size; i ++ )
	{
		if(totalMarks[0] > totalMarks[i])
		{
			totalMarks[0] = totalMarks[i];
		}
	}
	
	cout<<"\n the lowest number is : "<<totalMarks[0]<<" "<< "\n";
	
	// finding the index having lowest marks
	
	for (int i = 0 ; i <size ; i ++)
	{
		if (totalMarks[i]== totalMarks[0])
		{
			index = i;	
		}
	}
	cout<<"the lowest number index is : "<<index<<"\n";
		
	return 0;
}