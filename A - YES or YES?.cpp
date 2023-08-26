#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    string s;
    for(int i=0;i<T;i++)
    {
        cin>>s;
        int m=s.size();
        for(int i=0;i<m;i++)
        {
            s[i]=toupper(s[i]);
        }
        if(s=="YES")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
