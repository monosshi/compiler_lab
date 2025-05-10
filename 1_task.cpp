#include<bits/stdc++.h>  // Include all standard libraries
using namespace std;     // This allows us to use standard C++ library features

int main()               //main function
{

    string str;          //declaring string type variable str
    cin>>str;            //taking user input

    
    // string var =str.substr(0,str.length()-2); // Extract the variable part (like 'a' from 'a++')
    // string op = str.substr(str.length()-1);   // Extract the last operator character

    // cout << var << "=" << var << op << "1";   // Output in the format: a = a + 1 or a = a - 1

    string op= str.substr(str.length()-2);
    string var = str.substr(0,str.length()-4);

    cout<<var<<" =  "<<var<<op<<"1"<<endl;


    return 0;            //return nothing successful execution
}

// x=5+5;,
// x=x+1;
// x=x-1;