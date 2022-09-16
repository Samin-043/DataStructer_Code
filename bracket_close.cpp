#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int balanced_implemented(char s[],int len)
{
    int top=0;
    char stc[130];
    char c;

    for(int i=0; i<len; i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            top=top+1;
            stc[top]=s[i];

            continue;

        }

        if(top==0)
        {
            return -1;
        }

        else
        {
            switch(s[i])
            {
            case ')':
                c=stc[top];
                top=top-1;

                if(c=='{'|c=='[')
                {
                    return -1;

                }

                break;

            case '}':
                c=stc[top];
                top=top-1;

                if(c=='('|c=='[')
                {
                    return -1;

                }

                break;

            case ']':
                c=stc[top];
                top=top-1;

                if(c=='('|c=='{')
                {
                    return -1;

                }

                break;

            }

        }

    }

    return top;

}

int main()

{
    char s[130];
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",s);
        int len=strlen(s);
        if(s==NULL)
        {
            continue;
        }

        int m=balanced_implemented(s,len);

        if(m==0)
        {
            printf("Yes\n");

        }

        else
        {
            printf("No\n");

        }

    }

    return 0;
}
