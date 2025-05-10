#include<bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        cout << "Enter 1 to terminate, 2 to continue: ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Terminated" << endl;
            break;
        }
        else if (choice == 2)
        {
            string str;
            cin >> str;
            char op1, op2;
            string A, B, C;
            int count = 0;

            for(int i = 0; i < str.size(); i++)
            {
                if(str[i] == '+'  || str[i] == '-'||  str[i] == '*' || str[i] == '/')
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

            int a = stoi(A);
            int b = stoi(B);
            int c = stoi(C);
            int ans;

            if(op2 == '*')
            {
                if(op1 == '+')
                    ans = a + (b * c);
                else if(op1 == '-')
                    ans = a - (b * c);
                else if(op1 == '/')
                    ans = a / (b * c);
                else if(op1 == '*')
                    ans = a * b * c;
            }
            else if(op2 == '/')
            {
                if(op1 == '+')
                    ans = a + (b / c);
                else if(op1 == '-')
                    ans = a - (b / c);
                else if(op1 == '*')
                    ans = (a * b) / c;
                else if(op1 == '/')
                    ans = a / b / c;
            }
            else if(op2 == '+')
            {
                if(op1 == '-')
                    ans = a - (b + c);
                else if(op1 == '*')
                    ans = (a * b) + c;
                else if(op1 == '/')
                    ans = (a / b) + c;
                else if(op1 == '+')
                    ans = a + b + c;
            }
            else if(op2 == '-')
            {
                if(op1 == '+')
                    ans = (a + b) - c;
                else if(op1 == '*')
                    ans = (a * b) - c;
                else if(op1 == '/')
                    ans = (a / b) - c;
                else if(op1 == '-')
                    ans = a - b - c;
            }

            cout << ans << endl;
        }
    }

    return 0;
}