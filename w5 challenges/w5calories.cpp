#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	
	int fats;
	int total_calories;
	int cal_from_fats;
	int per_of_cal;
	
	cout << "Enter number of calories: " << endl;
	cin >> total_calories;
	
	if (total_calories > 0)
	{
		cout << "Enter fat grams: " << endl;
	    cin >> fats;
	    
	    if (fats>0)
	    {
	    	cal_from_fats = 9 *fats;
	        per_of_cal = (cal_from_fats*100) / total_calories;
	        
	        if (fats > total_calories)
	        {
	        	cout << "invalid input. Fats cant be greater than calories." << endl;
			}
			else
			    cout << "Total calories                         : " << total_calories << endl;
                cout << "Total fat grams                        : " << fats << endl;
                cout << "Total calories from fat                : " << cal_from_fats <<  endl;
                cout << "Total percentage of calories from fat  : " << per_of_cal  << endl;
                cout << endl;
		}
		else
		 cout << " Fats must be greater than 0." << endl;
	}
	else 
	cout << " Calories must be greater than 0." << endl;
	
	
	
	
	return 0;
}