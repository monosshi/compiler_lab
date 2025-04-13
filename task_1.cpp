#include<iostream>       // This is a preprocessor directive to include input-output stream
#include<string>         //Includes the C++ Standard Library for using the 'string' data type and its functions
using namespace std;     // This allows us to use standard C++ library features

int main()               //main function program starts its execution from here
{
    string n;             // Declaring String type variables n
    cin>>n;               //taking user input

    for(int i=n.size()-1;i>=0;i--)   //for loop  Start from the last valid index
    {
        cout<<n[i];       // Print characters in reverse
    }
    cout<<endl;          //printing newline
    return 0;            //return nothing successful execution
}

