#include<iostream>       // This is a preprocessor directive to include input-output stream
using namespace std;     // This allows us to use standard C++ library features
int main()               //main function program starts its execution from here
{
    int age;             //declaring an integer type variable named age

    cout<<"Enter your Age please = ";  // Prompting the user to enter their age
    cin>>age;            // taking input from user and storing it to age variable
   
    if(age<18)           // if else condition applied here if the entered age is less than 18 
    {
        cout<<"You are not a Voter";  //output will print not a Voter
    }
    else                 //else that means if the age is more than 18
    {
        cout<<"You are a Voter";   //output will print Voter
    }

    return 0;           //return nothing successful execution
}

