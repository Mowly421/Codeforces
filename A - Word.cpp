#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up=0,low=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            up++;
        }
        else
        {
            low++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(up>low)
        {
            s[i]=toupper(s[i]);
        }
 
        else
        {
            s[i]=tolower(s[i]);
        }
        
    }
    
    cout<<s<<endl;
 
}
