#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    optimize();
    int a,b;
    cin>>a>>b;
 
 
    int m=0,n;
    int sum=0;
    int total;
 
    int k=a;
    for(int i=0; ;i++)
    {
        m=k/b;
        n=k%b;
        sum=sum+m;
 
        k=m+n;
        n=0;
 
        if(k<b)
        {
            break;
        }
    }
 
    total=sum+a;
    cout<<total<<endl;
 
 
}
