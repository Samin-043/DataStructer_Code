#include<stdio.h>
#include<stdlib.h>

int arr[100],temp[100],c=0;

void merge_implemented(int st,int en,int md)
{
    int i,fi_arr_count,se_arr_count;
    fi_arr_count=st;
    se_arr_count=md+1;

    for(i=fi_arr_count; fi_arr_count<=md&&se_arr_count<=en; i++)
    {
        if(arr[fi_arr_count]<arr[se_arr_count])
            temp[i]=arr[fi_arr_count++];
        else
            temp[i]=arr[se_arr_count++];

    }

    while(fi_arr_count<=md)
    {
        temp[i++]=arr[fi_arr_count++];
    }

    while(se_arr_count<=en)
    {
        temp[i++]=arr[se_arr_count++];

    }

    for(i=st; i<en; i++)
    {
        arr[i]=temp[i];
    }


}


void Sorting_element(int st,int en)
{
    if(st>=en)
        return;

    int md=(st+en)/2;

    Sorting_element(st,md);
    Sorting_element(md+1,en);

    merge_implemented(st,en,md);

}


int main()
{
    int a[]= {6,5,4,3,2,1};

    Sorting_element(0,5);
    int i;
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);

    }

    printf("\n");


    return 0;
}


