#include<iostream>
#include<stdlib.h>

 using namespace std;
 int main(){
 while(1){
int randomNumber,guessNumber;
cout<< "Enter your guess random Number 1 to 5: ";
cin>>guessNumber;

randomNumber = 1+rand()%5;
if(guessNumber==randomNumber)
{
    cout<< "You have won"<< "Got this"<<endl<<endl;
}
else{
    cout << "You have lost"<< "\nYou have lost"<<endl;
    cout<< "Your correct number is: "<<randomNumber<<endl<<endl;
}
 }
 }
