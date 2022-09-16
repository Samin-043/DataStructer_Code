#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int a[n];
    int i,j;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //rand();

    }

    int index_min;
    int count,comparisom_count;

    count=0;
    comparisom_count=0;

    for(i=0;i<n-1;i++)
    {

        index_min=i;

        for(j=i+1;j<n;j++)
        {

            comparisom_count++;

            if(a[j]<a[index_min])
            {
                index_min=j;
            }

        }

        if(index_min!=i)
        {
            int temp;
            temp=a[i];
            a[i]=a[index_min];
            a[index_min]=temp;
            count++;

        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }

    printf("\n");

    printf("swap : %d num_of_comparisom : %d\n",count,comparisom_count);

    return 0;


}
