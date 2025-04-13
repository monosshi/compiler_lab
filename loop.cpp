#include<iostream>       // This is a preprocessor directive to include input-output stream
using namespace std;     // This allows us to use standard C++ library features
int main()              //main function program starts its execution from here
{
    int random;           //declaring an integer type variable named random
    cin>>random;          //taking user input and storing it to the integer type variable random

    for(int i=0;i<=random;i++) //for loop it runs from i=0 to i<=random and i is incrementing
    {
        cout<<"Compiler \n";   // Prints "Compiler" followed by a newline on each iteration
    }
    return 0;             //return nothing successful execution
}

