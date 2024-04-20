#include <iostream>
using namespace std;
int main()
{
              

    int store1;
    int store2;
    int store3;
    int store4;
    int store5;
    int store1_100; 
    int store2_100; 
    int store3_100; 
    int store4_100; 
    int store5_100;

    
	cout << "Enter today's sales for store 1: " <<endl;
    cin >> store1;
    while (store1%100!=0){
    	cout << "invalid output. Numer should be multiple of 100. try again for store 1:  "<< endl;
    	cin>> store1;
	}
    store1_100 = store1 / 100; 

    cout << "Enter today's sales for store 2: " <<endl;
    cin >> store2;
     while (store2%100!=0){
    	cout << "invalid output. Numer should be multiple of 100. try again for store 2:  "<< endl;
    	cin>> store2;
	}
    store2_100 = store2 / 100;

   
    cout << "Enter today's sales for store 3: " <<endl;
    cin >> store3;
     while (store3%100!=0){
    	cout << "invalid output. Numer should be multiple of 100. try again for store 3:  "<< endl;
    	cin>> store3;
	}
    store3_100 = store3 / 100;

    cout << "Enter today's sales for store 4: "<< endl;
    cin >> store4;
     while (store4%100!=0){
    	cout << "invalid output. Numer should be multiple of 100. try again for store 4:  "<< endl;
    	cin>> store1;
	}
    store4_100 = store4 / 100;
    
    cout << "Enter today's sales for store 5: "<<endl;
    cin >> store5;
     while (store5%100!=0){
    	cout << "invalid output. Numer should be multiple of 100. try again for store 5:  "<< endl;
    	cin>> store5;
	}
    store5_100 = store5 / 100;

    cout << "sales bar chart" << endl;
   
    cout << "(Each * = $100)" << endl;
    
	
	cout << "Store 1: ";
    for (int i = 0; i < store1_100; i++)
        cout << '*';

    cout << endl;

    cout << "Store 2: ";
    for (int i = 0; i < store2_100; i++)
        cout << '*';

    cout << endl;

    cout << "Store 3: ";
    for (int i = 0; i < store3_100; i++)
        cout << '*'; 

    cout << endl;

    cout << "Store 4: ";
    for (int i = 0; i < store4_100; i++)
        cout << '*';

    cout << endl;
    
    cout << "Store 5: ";
    for (int i = 0; i < store5_100 ; i++)
        cout << '*';
        
   

    return 0;
}
