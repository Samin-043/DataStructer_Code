#include<stdio.h>

int flag=0;
int arr[100];
int top=-1;
int head=-1;

void bubble_implemented(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
}

void selection_implement(int a[],int n)
{
    int i,j;
    int index_min,temp;

    for(i=0; i<n; i++)
    {
        index_min=i;

        for(j=i+1; j<n; j++)
        {
            if(a[index_min]>a[j])
            {
                index_min=j;
            }
        }

        if(index_min!=i)
        {
            temp=a[index_min];
            a[index_min]=a[i];
            a[i]=temp;
        }
    }

}

void insertion_implemented(int a[],int n)
{
    int i,j,element;
    for(i=1; i<n; i++)
    {
        element=a[i];
        j=i-1;

        while(j>=0&&a[j]>element)
        {
            a[j]=a[j+1];
            j=j-1;
        }

        a[j+1]=element;

    }
}


void push_implemented(int x)
{
    top=top+1;
    arr[top]=x;

}

void pop_implemented()
{
    int value;
    if(top==-1)
        return;

    value=arr[top];
    top=top-1;

}

void queue_pop_implemented()
{
    int value;
    head=head+1;
    value=arr[head];

}


int IsEmpty()
{
    if(top==-1)
        return 0;
    else
        return -1;

}

int size()
{
    int stack_size;
    stack_size=top;

    return stack_size;
}

int binary_implemented(int a[],int start_index,int end_index,int search_value)
{
    int mid;

    while(start_index<=end_index)
    {
        mid=start_index+(end_index-start_index)/2;

        if(a[mid]>search_value)
        {
            end_index=mid-1;

        }
        else if(a[mid]<search_value)
        {
            start_index=mid+1;
        }

        else
        {
            flag=1;
            return mid;
        }

    }

}

void print_array(int a[],int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void print_info()
{
    printf("List is : ");
    int i=0;
    while(i<=top)
    {
        printf("%d ",arr[i]);
        i++;
    }
    printf("\n");

}

void print_queue()
{
    printf("List is : ");
    int i=head+1;
    while(i<=top)
    {
        printf("%d ",arr[i]);
        i++;
    }

}

int main()
{
    int i,a[100],n;
    printf("Array size : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

    }
    int num;

    while(1)
    {
        printf("Enter the num : ");
        scanf("%d",&num);
        switch(num)
        {

        case 1:
            bubble_implemented(a,n);
            print_array(a,n);
            break;
        case 2:
            selection_implement(a,n);
            print_array(a,n);
            break;
        case 3:
            insertion_implemented(a,n);
            print_array(a,n);
            break;
        case 4:
            bubble_implemented(a,n);
            printf("Enter value to search : ");
            int value;
            scanf("%d",&value);
            int pos;
            pos=binary_implemented(a,0,n-1,value);

            if(flag==0)
            {
                printf("Value not found in array \n");
            }
            else
            {
                printf("position is : %d\n",pos+1);

            }
            break;

        case 5:

            printf("Stack part : ");
            int z;
            printf("\nEnter value to push  : ");
            scanf("%d",&z);
            push_implemented(z);
            print_info();
            break;

        case 6 :
            printf("Pop element is : ");
            pop_implemented();
            print_info();
            break;
        case 7:
            printf("Queue   : ");
            queue_pop_implemented();
            print_queue();
            break;


        }

    }

    return 0;
}
