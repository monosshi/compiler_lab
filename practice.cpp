#include<bits/stdc++.h>
using namespace std;

int sum (int x, int y);

int main()
{

    int x,y;
    cin>>x>>y;
    int result=sum(x,y);
    cout<<"the sum of x & y is = "<<result;
    return 0;
}

int sum(int x, int y)
{
    int s= x+y;
    return s;
}