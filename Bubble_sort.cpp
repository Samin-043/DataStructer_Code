#include<stdio.h>
#include<iostream>
//#include<algorithm>
using namespace std;

int main()
{

    long long int a[100000];
    int n,temp;
    bool isSwapping;

    while((scanf("%d",&n))!=EOF)
    {

        for(int i=0; i<n; i++)
        {
            a[i]=rand();
        }

        for(int i=0; i<n; i++)
        {
            printf("%lld ",a[i]);
        }

        printf("\n");


        for(int i=0; i<n-1; i++)
        {
            isSwapping=false;

            for(int j=0; j<n-1-i; j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    //swap(a[j],a[j+1]);
                    isSwapping=true;

                }

            }

            if(isSwapping==false)
            {
                break;

            }

        }

        for(int i=0; i<n; i++)
        {

            printf("%d ",a[i]);

        }

        printf("\n");


    }

    return 0;
}
