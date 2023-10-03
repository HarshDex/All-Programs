#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int size;
    int top;
    int *ar;
};
int isEmpty(struct stack *sp)
{
    if(sp->top == -1)
        return 1;
}
int isFull(struct stack *sp)
{
    if(sp->top == sp->size-1)
        return 1;
}
void push(struct stack *sp,int a)
{
    if(isFull(sp))
    {
        printf("Stack overflow!!");
        return;
    }
    else
    {
        sp->top++;
        sp->ar[sp->top] = a;
    }
}
int pop(struct stack *sp)
{
    if(isEmpty(sp))
    {
        printf("Stack underflow!!");
        return -1;
    }
    else
    {
        int a = sp->ar[sp->top];
        sp->top--;
        return a;
    }
}
int main()
{
    struct stack *sp;
    int size;
    printf("enter the size of the stack : ");
    scanf("%d",&size);

    sp->size = size;

    sp->ar = (int*)malloc(sizeof(int));
    sp->top = -1;

    int n;
    printf("enter the number of element you want to push in the stack : ");
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        int a; 
        printf("enter the element : ");
        scanf("%d",&a);
        push(sp,a);
    }

    int m;
    printf("enter the number of element you want to pop : ");
    scanf("%d",&m);

    for(int i =0;i<m;i++)
    {
        int a = pop(sp);
        printf("%d",a);
    }

   return 0;
}