#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,p;
    int i,m;
    cin>>s;
    m=s.length();
    for(i=0;i<m;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
           {
               continue;
           }
           else
            {
                p+='.';
                p+=tolower(s[i]);
            }
 
    }
    cout<<p<<endl;
}
