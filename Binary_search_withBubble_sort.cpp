#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    ////////Bubble_sort=O(n^2)//////////////

    while((scanf("%lld",&n))!=EOF)
    {

        int a[n];
        int i,j;
        int flag_1;

        for(i=0; i<n; i++)
        {

            a[i]=rand();

          //  scanf("%d",&a[i]);

        }

        int temp;

        for(i=0; i<n-1; i++)
        {
            flag_1=0;

            for(j=0; j<n-i-1; j++)
            {
                if(a[j]>a[j+1])             ///descending order (a[j]<a[j+1])////
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    flag_1=1;

                }

            }

            if(flag_1==0)
            {
                break;

            }

        }

        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);

        }

        printf("\n");

        int mid,low,high,flag,key_value;

        scanf("%d",&key_value);

        low=0;
        high=n-1;
        flag=0;

        while(low<=high)
        {
            mid=(low+high)/2;

            if(a[mid]<key_value)
            {
                low=mid+1;

            }

            else if(a[mid]>key_value)
            {
                high=mid-1;

            }

            else
            {
                flag=1;
                //printf("%d\n",mid);
                break;
            }

        }

        if(flag==1)
        {
            printf("%d\n",mid);

        }

        else
        {
            printf("NOT found the number\n");

        }

    }

    return 0;
}

