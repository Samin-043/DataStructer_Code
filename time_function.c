#include<stdio.h>
#include<time.h>
int main()
{
    int i;
    double total_time;
    int n;
    scanf("%d",&n);

    clock_t start, end;
    srand(time(NULL));

    start = clock();
    //time count starts
    for (i = 0; i < n; i++)
    {
        printf("random_number[%d]= %d\n", i + 1, rand());
    }
    end = clock();
    //time count stops
    total_time = ((double) (end - start)) / CLK_TCK;
    //calulate total time
    printf("\nTime taken to print %dth random number is: %f", n,total_time);
    return 0;
}
