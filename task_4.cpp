#include<iostream>       // This is a preprocessor directive to include input-output stream
#include<string>        // Includes the C++ Standard Library for using the 'string' data type and its functions
using namespace std;    // This allows us to use standard C++ library features

int main()              //main function program starts its execution from here
{
    string n;           // Declaring String type variables n
    cin>>n;             //taking user input

    for(int i=0;i<n.size();i++) //For loop to check each character of the string
    {
        for(int j=i+1;j<n.size();j++) //for loop to check the next character
        {
            if(tolower(n[i])>tolower(n[j])) //converting it to lowercase to check is one is greater
            {
                swap(n[i],n[j]); //swapping the original character
            }
        }
    }

    cout<<n;               //printing the string
    return 0;              //return nothing successful execution
}

