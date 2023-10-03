#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int top;
    int size;
    int *ar;
};
int isfull(struct stack *sp)
{
    if(sp->top == sp->size)
        return 1;
    else 
        return 0;
}
int isempty(struct stack *sp)
{
    if(sp->top == -1)
        return 1;
    else
        return -1;
}
void push(struct stack * sp,int data)
{
    if(isfull(sp))
        printf("Stack overflow!\n");
    else{
        sp->top++;
        sp->ar[sp->top] = data;
        }
}

int pop(struct stack *sp)
{
    int b;
    // if(isempty(sp))
    //     printf("Stack underflow!!\n");
    // else {
        b = sp->ar[sp->top];
        sp->top--;
        return b;
}
int main()
{
    struct stack *s ;
    int size;
    printf("Enter the size of the stack : ");
    scanf("%d",&size);
    s->size = size;
    s->top = -1;
    int n;
    printf("Enter the number of element you want to push in the stack : ");
    scanf("%d",&n);
    s->ar =(int*)malloc(sizeof(int));
    for(int i =0;i<n;i++)
    {
        int a;
        printf("Enter element : ");
        scanf("%d",&a);
        push(s,a);
    }
    printf("Elements have been successfully pushed into the stack ");
    
    int m;
    printf("\nEnter the number of element you want to pop from the stack : ");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int a;
        a = pop(s);
        printf("%d ",a);
    }
    return 0;
}