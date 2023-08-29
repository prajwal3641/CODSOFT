#include<iostream>
using namespace std;



int main(){

    // task 2 of internship
    // simple calculater

    int x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    char operation;
    cout<<"Choose an operation";
    cin>>operation;

    switch(operation){
        case '+' :
            cout<<"Addition of "<<x<<" and "<<y<<" is : "<<x+y<<endl;
            break;
        
        case '-':
            cout<<"Subtraction of "<<x<<" and "<<y<<" is : "<<x-y<<endl;
            break;
        
        case '*':
            cout<<"Multiplication of "<<x<<" and "<<y<<" is : "<<x*y<<endl;
            break;
        
        case '/':
            cout<<"Division of "<<x<<" and "<<y<<" is : "<<x/y<<endl;
            break;
        
        default:
           cout<<"invalid operator"<<endl;
    }
}
