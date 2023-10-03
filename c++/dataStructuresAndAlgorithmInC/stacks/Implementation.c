#include<stdio.h>
#include<malloc.h>
struct stack
{
    int data;
    int top;
    int size;
    int *ar;
};
int isFull(struct stack *sp)
{
    if(sp->top == sp->size-1)
        return 1;
}
int isEmpty(struct stack *sp)
{
    if(sp->top == -1)
        return 1;
}

void push(struct stack *sp,int data)
{
    if(isFull(sp))
    {
        printf("cannot push further\nstack overflow!!\n");
        return;
    }
    sp->top++;
    sp->ar[sp->top] = data;
}
int pop(struct stack *sp)
{
    if(isEmpty(sp))
    {
        printf("stack is empty\ncannot push further\n");
        return -1;
    }
    int a = sp->ar[sp->top];
    sp->top--;
    return a;
}
struct stack *new(int n)
{
    struct stack *s;
    s->size = n;
    s = (struct stack*)malloc(sizeof(int));
    s->top = -1;
    return s;
}
int main()
{
    int n;
    printf("enter the total capacity of the stack<> : ");
    scanf("%d",&n);

    struct stack *sp = (struct stack*)malloc(sizeof(int));
    sp->size = n;
    sp->top = -1;
    
    sp->ar = (int*)malloc(sp->size*sizeof(int));

    int x;
    printf("enter the number of elments you want to push into the stack : ");
    scanf("%d",&x);

    for(int i =0;i<x;i++)
    {
        int a;
        printf("enter the element you want to push : ");
        scanf("%d",&a);

        push(sp,a);
    }


    int f;
    printf("enter the element you want to pop from the stack : ");
    scanf("%d",&f);

    int d;
    for(int i =0;i<f;i++)
    {   
        d= pop(sp);
        printf("%d ",d);
    }

    return 0;
}