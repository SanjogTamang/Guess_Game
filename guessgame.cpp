//number guessing game
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
srand(time(0));
int secretnumber=rand()%100+1;
int guess,attempt=0;
cout<<"Welcome to the number guessing game:"<<endl;
cout<<"I have choosen random number from 1 to 100! Try to guess the number:"<<endl;
do{
    cout<<"Enter your guess number:"<<endl;
    cin>>guess;
    attempt++;
    if(secretnumber>guess){
        cout<<"Low"<<endl;
    }
    else if(secretnumber<guess){
        cout<<"High"<<endl;
    }
    else{
        cout<<"Congratulation You have guess the right number("<<secretnumber<<") in "<<attempt<<" attempts:"<<endl;
    }
}while(guess!=secretnumber);
return 0;




}