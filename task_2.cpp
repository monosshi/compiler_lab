#include<iostream>       // This is a preprocessor directive to include input-output stream
#include<string>        // Includes the C++ Standard Library for using the 'string' data type and its functions
using namespace std;    // This allows us to use standard C++ library features

int main()               //main function program starts its execution from here
{
    string n;             // Declaring String type variables n
    cin>>n;               //taking user input

    for(int i=0;i<=n.size();i++) //For loop to check each character of the string
    {
        if(n[i]=='Z'){     //if the character is 'Z' 
            n[i]='A';      //than convert it to 'A'
        }
        else if(n[i]=='z')  //if the chararcter is 'z'
        {
            n[i]='a';       //than convert it to 'a'
        }
        else
        {
            n[i]=n[i]+1;    //else convert each character to it's next character
        }
    }

    cout<<n<<endl;          // printing the string
    return 0;               //return nothing successful execution
}


