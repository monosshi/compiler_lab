#include<bits/stdc++.h>
using namespace std;

void arra_input_func(int size, int arr[]);

int main()
{

    int size;
    cin>>size;

    int arr[size];
    arra_input_func(size, arr);
    return 0;
}

void arra_input_func(int size, int arr[])
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}