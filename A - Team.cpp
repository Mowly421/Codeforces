#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2)
        {
 
            p++;
        }
 
    }
    cout << p << endl;
}
