#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string p="hello";
    int j=0;
 
    for(int i=0;i<s.size();i++)
    {
        if(p[j]==s[i])
        {
            j++;
 
        }
 
 
    }
     if(j==5)
            {
                cout<<"YES"<<endl;
            }
    else
    {
    cout<<"NO"<<endl;
    }
    return 0;
 
}
