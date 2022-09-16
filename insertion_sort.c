#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int a[n];
    int i,j;

    for(i=0;i<n;i++)
    {
        //scanf("%d",&a[i]);
        rand();

    }

    int num;

    for(i=1;i<n;i++)
    {
        num=a[i];

        j=i-1;
        while(j>=0&&a[j]>=num)
        {
            a[j+1]=a[j];
            j=j-1;

        }
        a[j+1]=num;

    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }

    printf("\n");

    return 0;
}
