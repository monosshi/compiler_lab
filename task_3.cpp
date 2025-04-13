#include<iostream>       // This is a preprocessor directive to include input-output stream
#include<string>         //Includes the C++ Standard Library for using the 'string' data type and its functions
using namespace std;     // This allows us to use standard C++ library features

int main()               //main function program starts its execution from here
{
    string n;             // Declaring String type variables n
    getline(cin,n);       //taking user input using getline

    for(int i=0;i<=n.size();i++)   //for loop to check each character of the string
    {
        if( i==0 || n[i-1]==' ')   //check it's either the first character or the character after a space
        {
        if(n[i]>='a' && n[i]<='z') // If it's a lowercase letter, convert it to uppercase
        {
          n[i]=n[i]-32;     // Convert lowercase to uppercase
        }
        }
    }
    cout<<n;               // printing the modified string with capitalized words

    return 0;              //return nothing successful execution
}

