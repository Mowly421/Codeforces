#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,m=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            p++;
        }
        else
        {
            m++;
        }
    }
    if(p>m)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
        }
    }
    else
        {
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout<<i+1;
                break;
            }
        }
    }
}
