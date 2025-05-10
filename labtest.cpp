#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin,n);

    for(int i=0;i<=n.size();i++)
    {
        if(i==0||n[i-1] ==' ')
        {
            if(n[i]>='a' || n[i]<='z')
            {
                n[i]=n[i]-32;
            }
        }
    }
    cout<<n<<endl;
    return 0;
}