#include <iostream>
#include <cstdlib> //contains function prototype for rand

using namespace std;

//function prototypes
int generateQuestionAndAnswer();
void getComment(short commentType);
   
int main(){   
    //variable declaration
    int correctAns, answer;
    char choice;
   
    do{
       correctAns = generateQuestionAndAnswer();
       do{
          cout << "\nYour answer: ";
          cin >> answer;
         
          if(answer == correctAns){
             getComment(1);
          }else{
             getComment(0);
          }
         
       }while(answer != correctAns);
      
       cout << "\n\nTry another question? [y/n] ";
       cin >> choice;
    }while(choice == 'y');
   
    //terminate progam successfully.. :)
    return 0;
}

int generateQuestionAndAnswer(){
    int num1, num2;
   
    num1 = 1 + rand() % 10;
    num2 = 1 + rand() % 10;
   
    cout << "\nHow much is " << num1 << " times " << num2 << "?\n";
   
    return num1 * num2;       
}

/*
Display a comment
1 is for correct answer comment
0 is for wrong answer comment
*/
void getComment(short commentType){
    if(commentType == 1){
       switch(rand() % 4){
          case 0: cout << "\nVery good!"; break;   
          case 1: cout << "\nExcellent!"; break;   
          case 2: cout << "\nNice work!"; break;   
          case 3: cout << "\nKeep up the good work!";            
       }   
    }else{
       switch(rand() % 4){
          case 0: cout << "No. Please try again."; break;   
          case 1: cout << "Wrong. Try once more."; break;   
          case 2: cout << "Don't give up!"; break;   
          case 3: cout << "No. Keep trying.";         
       }   
    }
          
}
