#include<bits/stdc++.h>
using namespace std;
void f1();
void f2();

int main()
{
    for(;;)
    {
    cout<<"enter 1 for token , 2 for precedence and 3 for terminated the program"<<endl;
    int x;
    cin>>x;

    if(x==1)
    {
    f1();
    }
    else if(x==2)
    {
    f2();
    }
    else if(x==3)
    {
        cout<<"terminated"<<endl;
        break;
    }
}
}

void f1()
{
  string a;
  cin>>a;

  string var =a.substr(0,a.length()-2);
  string op =a.substr(a.length()-1);

  cout<<var<<" = "<<var<<op<<"1"<<endl;
}

void f2()
{
    string str;
    cin>>str;

    
    bool hasoperator = false;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
        {
            hasoperator=true;
            break;
        }
    }

     if(!hasoperator)
    {
     cout<<str<<endl;
     return;
    }
    string A,B,C;
    char op1,op2;
    int count=0;

    
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='+'|| str[i]=='-'|| str[i]=='*'|| str[i]=='/')
        {
            if(count==0)
            {
                op1=str[i];
                count++;
            }
            else if(count==1)
            {
                op2=str[i];
                count++;
            }
        }
        else if(count==0)
        {
            A.push_back(str[i]);
        }
        else if(count==1)
        {
            B.push_back(str[i]);
        }
        else if(count==2)
        {
            C.push_back(str[i]);
        }
    }

    int a,b,c;
    int ans;
    a=stoi(A);
    b= stoi(B);
    c= stoi(C);


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
       else if(op1=='*')
        {
            ans=a*b*c;
        }
       else if(op1=='/')
        {
            ans=a/(b*c);
        }
    }
    else if(op2=='/')
    {
        if(op1=='+')
        {
            ans=a+(b/c);
        }
       else if(op1=='-')
        {
            ans=a-(b/c);
        }
       else if(op1=='/')
        {
            ans=a/b/c;
        }
       else if(op1=='*')
        {
            ans=(a*b)/c;
        }
    }
    else if(op2=='+')
    {
        if(op1=='+')
        {
            ans=a+b+c;
        }
       else if(op1=='-')
        {
            ans=a-(b+c);
        }
       else if(op1=='/')
        {
            ans=(a/b)+c;
        }
       else if(op1=='*')
        {
            ans=(a*b)+c;
        }
    }
    else if(op2=='-')
    {
        if(op1=='+')
        {
            ans=(a+b)-c;
        }
       else if(op1=='-')
        {
            ans=a-b-c;
        }
       else if(op1=='/')
        {
            ans=(a/b)-c;
        }
       else if(op1=='*')
        {
            ans=(a*b)-c;
        }
    }

    cout<<ans<<endl;
    }
