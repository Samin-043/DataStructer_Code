#include<stdio.h>
#define Stack_size 100

typedef struct
{
    int top;
    int data[Stack_size];

} Stack;

void push(Stack *s,int item)
{
    if(s->top<Stack_size)
    {
        s->data[s->top]=item;
        s->top=s->top+1;

    }

    else
    {
        printf("Stack is full\n");

    }

}

int pop(Stack *s)
{
    int item;

    if(s->top==0)
    {
        printf("Stack is empty\n");
        return -1;
    }

    else
    {
        s->top=s->top-1;
        item=s->data[s->top];
    }

    return item;

}


int main()
{
    Stack my_Stack;

    int item;

    my_Stack.top=0;
    int n;
    scanf("%d",&n);

    int a[n];
    int i;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        push(&my_Stack,a[i]);

    }


    /*push(&my_Stack,1);
    push(&my_Stack,2);
    push(&my_Stack,3);
    */

    printf("Pop the item\n");

    for(i=0; i<n; i++)
    {
        item=pop(&my_Stack);
        printf("%d ",item);

    }

    /*item=pop(&my_Stack);
    printf("%d ",item);

    item=pop(&my_Stack);
    printf("%d ",item);

    printf("\n");
    */

    return 0;

}
