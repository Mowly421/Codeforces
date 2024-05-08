#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>v;
        for(int i=0;i<n-1;i++)
        {
            string s1;
            s1.push_back(s[i]);
            s1.push_back(s[i+1]);
            v.insert(s1);
        }
        cout<<v.size()<<endl;
 
    }
 
}
