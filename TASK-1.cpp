#include<iostream>
#include<string>
#include<ctime>
using namespace std;

// NUMBER GEUSSING GAME

int  main(){

    cout<<"Please enter 'YES' to start the game, otherwise 'NO' . : ";
    string start;
    cin>>start;
    if(start == "no" || start == "NO"){
        return 0;
    }
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Welcome to the Number Guessing Game "<<endl<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;
    
    cout<<"Enter the range for the Number Guessing Game(1 to m) : ";
    
    int  m;
    cin>>m;
    cout<<"--------------------------------------------"<<endl;
    cout<<"You have to guess the randomly generated number between 0 to "<<m<<endl;

    cout<<"--------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Game starting"<<endl;
    cout<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;

    srand(time(0));
    int randomNumber = rand()%m;
    int userNumberGuess;
    
    do{

        cout<<"Enter the Number : ";
        cin>>userNumberGuess;   

       if(userNumberGuess == randomNumber){
        cout<<"You guessed right, entered number is "<<userNumberGuess<<endl;
        break;
       }else if(userNumberGuess > randomNumber){
        cout<<"Entered number is Larger"<<endl<<endl;
       }else{
        cout<<"Entered number is Smaller"<<endl<<endl;
       }
    }while(userNumberGuess != randomNumber);
}
