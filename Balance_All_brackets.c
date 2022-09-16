#include<stdio.h>
#include<string.h>

int balanced_check(char s[])
{
    char Stack[100],last_char;
    int len,top,i;

    top=0;

    len=strlen(s);

    for(i=0; i<len; i++)
    {
        if(s[i]=='(')
        {
            Stack[top]='(';
            top=top+1;

        }


        else if(s[i]==')')
        {
            if(top==0)
            {
                return 0;

            }

            top--;

            last_char=Stack[top];

            if(last_char!='(')
            {
                return 0;
            }
        }

    }

    if(top==0)
    {
        return 1;

    }

    else
    {
        return 0;

    }


}

int main()
{

    char s[100];
    scanf("%s",s);

    int i,len;

    len=strlen(s);

    if(balanced_check(s))
    {
        printf("%s is Balanced\n",s);

    }

    else
    {
        printf("%s is Not Balanced\n",s);

    }


    return 0;
}

