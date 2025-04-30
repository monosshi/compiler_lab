#include<bits/stdc++.h>  // Include all standard libraries
using namespace std;     // This allows us to use standard C++ library features

void task_1();    // declaring task_1 function
void task_2();    // declaring task_2 function

 void task_1()    //task_1 external function
{

    string str;
    cin>>str;
    string var =str.substr(0,str.length()-2);
    string op = str.substr(str.length()-1);
    cout << var << "=" << var << op << "1"<<endl;

}
void task_2()    //task_2 external function
{
    string str;
    cin >> str;
    char op1, op2;
    string A, B, C;
    int count = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if(count == 0)
            {
                op1 = str[i];
                count++;
            }
            else if(count == 1)
            {
                op2 = str[i];
                count++;
            }
        }
        else
        {
            if(count == 0)
            {
                A.push_back(str[i]);
            }
            else if(count == 1)
            {
                B.push_back(str[i]);
            }
            else if(count == 2)
            {
                C.push_back(str[i]);
            }
        }
    }
    cout << "operand 1 : " << A << endl;
    cout << "operand 2 : " << B << endl;
    cout << "operand 3 : " << C << endl;
    cout << "operator 1 : " << op1 << endl;
    cout << "operator 2 : " << op2 << endl;
}
int main()         //main function
{
    for(;;){       //infinity loop   
    cout<<"Enter '1' to run the task_1 , '2' to run task_2 and '3' to terminate"<<endl;
    int n;
    cin>>n;

   
        if(n==1)    //if input is 1 task_1 will execute
        {
            cout<<"you are in task_1"<<endl;
            task_1(); // calling the function to execute task 1
        }
        else if(n==2) //if input is 2 task_2 will execute
        {
            cout<<"you are in task_2"<<endl;
            task_2();  // calling the function to execute task 2
        }
        else if(n==3)  //if input is 3 terminated
        {
            cout<<"Terminated"<<endl;
            break;   //break the loop
        }
    }
}