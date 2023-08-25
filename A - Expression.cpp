#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
 
    int ans=a+b+c;
    int ans1=a+(b*c);
    int ans2=a*(b+c);
    int ans3=a*b*c;
    int ans4=(a+b)*c;
 
    int p=max(ans4,(max(ans3,(max(ans2,max(ans,ans1))))));
 
    cout<<p<<endl;
 
    return 0;
}
