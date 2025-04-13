#include<iostream>       // This is a preprocessor directive to include input-output stream
using namespace std;     // This allows us to use standard C++ library features

int add(int x, int y);   // Function declaration
int main()               //main function program starts its execution from here
{
    int x,y;             // Declaring two integer variables x and y

    cin>>x>>y;           //taking user imput for both x and y

    int result =  add(x,y); // Calling the 'add' function with x and y as arguments, and storing the returned value in 'result'

    cout<<result;        // Printing the result
 
    return 0;            //return nothing successful execution
}

// Function definition for 'add' which takes two integers as parameters

 int  add(int x, int y)
{
    int Sum = x+y;  // Declaring a variable Sum and assigning it the sum of x and y
    return Sum;     // Returning the calculated sum back to the calling function
}

