#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a[1000],p=0,m=0;
    cin>>n>>h;
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=h)
            {
                p++;
            }
            else
            {
                m+=2;
            }
        }
    }
    cout<<p+m<<endl;
}
