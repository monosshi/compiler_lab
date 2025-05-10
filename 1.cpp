#include<bits/stdc++.h>  // Include all standard libraries
using namespace std;     // This allows us to use standard C++ library features
int main()               //main function
{


    string str;          //declaring string type variable str
    cin>>str;            //taking user input
    char op1, op2;       //declaring char type variable op1 and op2
    string A, B, C;     //declaring string type variable A,B,C
    int count = 0;      //counter

    for(int i = 0; i < str.size(); i++) // Loop through each character of the input string
{
    // Checking if the current character is an operator (+, -, *, /)
    if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
    {
        if(count == 0)                     // If first operator is found
        {
            op1 = str[i];                  // Store it in op1
            count++;                      // Move to the next stage
        }
        else if(count == 1)               // If second operator is found
        {
            op2 = str[i];                 // Store it in op2
            count++;                      // Move to the next stage
        }
    }
    else                                  // If the current character is part of a number (operand)
    {
        if(count == 0)                    // Before first operator
        {
            A.push_back(str[i]);         // Add to operand A
        }
        else if(count == 1)              // After first operator and before second operator
        {
            B.push_back(str[i]);         // Add to operand B
        }
        else if(count == 2)              // After second operator
        {
            C.push_back(str[i]);         // Add to operand C
        }
    }
}
    int a = stoi(A);      
    int b = stoi(B);             //converting string to integer
    int c = stoi(C);
    int ans;
    // Handling operator precedence using if-else
    if(op2=='*')
    {
        if(op1=='+')
        {
            ans=a+(b*c);
        }
       else if(op1=='-')
        {
            ans=a-(b*c);
        }
       else if(op1=='/')
        {
            ans=a/(b*c);
        }
        else if(op1=='*')
        {
            ans=a*b*c;
        }
    }
    else if(op2=='/')
    {
        if(op1=='+')
        {
            ans=a+(b/c);
        }
      else  if(op1=='-')
        {
            ans=a-(b/c);
        }
      else  if(op1=='*')
        {
            ans=(a*b)/c;
        }
        else if(op1=='/')
        {
            ans=a/b/c;
        }
    }
   else if(op2=='+')
    {
        if(op1=='-')
        {
            ans=a-(b+c);
        }
        else if(op1=='*')
        {
            ans=(a*b)+c;
        }
       else  if(op1=='/')
        {
            ans=(a/b)+c;
        }
        else if(op1=='+')
        {
            ans=a+b+c;
        }
    }
   else if(op2=='-')
    {
        if(op1=='+')
        {
            ans=(a+b)-c;
        }
       else if(op1=='*')
        {
            ans=(a*b)-c;
        }
       else if(op1=='/')
        {
            ans=(a/b)-c;
        }
        else if(op1=='-')
        {
            ans=a-b-c;
        }
    }

  cout<<ans<<endl;  //printing the answer
    
    return 0;     //return nothing successful execution
}




