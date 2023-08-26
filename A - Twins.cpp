#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],sum=0,p=0,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sum=sum/2;
    sort(arr,arr+n);
    for(int j=n-1;j>=0;j--)
    {
        p+=arr[j];
        count++;
        if(sum<p)
        {
            break;
        }
    }
    cout<<count<<endl;
}
