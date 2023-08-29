#include<iostream>

using namespace std;


// STUDENT GRADING SYSTEM



int main(){
 
   
     cout<<"Student Grading System"<<endl<<endl;

     string name;
     int physics_marks;
     int chemistry_marks;
     int maths_marks;
     cout<<"Enter your Name : ";
     getline(cin,name);
     cout<<"Enter your marks: "<<endl;
     cout<<"Physics : ";
     cin>>physics_marks;
     cout<<"Chemisry : ";
     cin>>chemistry_marks;
     cout<<"Maths : ";
     cin>>maths_marks;

     int average = (maths_marks + physics_marks + chemistry_marks)/3;
     int highest = max(maths_marks,max(physics_marks,chemistry_marks));
     int lowest  = min(maths_marks,min(physics_marks,chemistry_marks));

     cout<<endl<<"Welcome "<<name<<" to Student Grading System"<<endl<<endl;
     cout<<"Average Marks : "<<average<<endl;
     cout<<"Highest Marks : "<<highest<<endl;
     cout<<"Lowest Marks : "<<lowest<<endl<<endl;
     cout<<"ThankYou for using"<<endl<<endl;


}
