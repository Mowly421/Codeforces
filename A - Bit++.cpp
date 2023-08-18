#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,P=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            P++;
        }
        else
        {
            P--;
        }
 
    }
    cout<<P<<endl;
 
}
