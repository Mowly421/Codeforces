#include<stdio.h>
#include<string.h>
int main()
{
    char n[101];
    int ln=0,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",&n);
        ln=strlen(n);
        if(ln<=10)
        {
            printf("%s\n",n);
        }
        else
        {
            printf("%c%d%c\n",n[0],ln-2,n[ln-1]);
        }
    }
    return 0;
}
