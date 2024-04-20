#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int instate=3000;
	int outstate=4500;
	
	int room_1=2500;
	int room_2= 3500;
	
	int total_1=instate + room_1;
	int total_2 = outstate + room_2;
	
	char a;
	char b;
	
	cout << "Please input I if you are in-state or O if you are out-of-state: ";
	cin >> a;
	
	cout << "Please input Y if you require room and board and N if you do not: ";
	cin >> b;
	
	if (a=='I') {
		if (b=='N')
		cout << "your bill is : " << instate;
		else if (b=='Y')
		cout << "your bill is : " << total_1;
		
	}
	else
	{
		if (b=='N')
		cout << "your bill is : " << outstate;
		else if (b=='Y')
		cout << "your bill is: " << total_2;
	}
	return 0;
}