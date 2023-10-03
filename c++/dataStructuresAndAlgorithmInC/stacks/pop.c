#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int top;
    int size;
    int *ar;
};
void pushh(struct stack *s,int data)
{
    s->top++;
    s->ar[s->top]=data;
}
int pop(struct stack *stack)
{
    int data = stack->ar[stack->top];
    stack->top--;
    return data;
}
void CheckSize(struct stack* s)
{
    printf("Remaining element in the stack = %d\n", s->top +1);
}
void isempty(struct stack *s)
{
    if(s->top == -1)
        printf("stack is empty!!");
    else
        printf("stack is not empty!!");
}
void isFull(struct stack *s)
{
    if(s->top == s->size-1)
        printf("stack is full!!");
    else
        printf("stack is not full you can push the elements!!\n");
}
int main()
{
    struct stack *s = (struct stack*)malloc(sizeof(int));
    s->top = -1;
    int n;
    printf("enter the size of the stack : ");
    scanf("%d",&n);
    s->size = n;
    printf("enter the number of element you want to push in the stack : ");
    int a;
    scanf("%d",&a);
    s->ar = (int *)malloc(s->size*sizeof(int));
    printf("checking whether the stack is full or not\n");
    isFull(s);
    for(int j=0;j<a;j++)
    {
        printf("enter the %d - value : ",j+1);
        int d;
        scanf("%d",&d);
        pushh(s,d);
    }
    //check
    printf("checking whether the stack is full or not\n");
    isempty(s);
    printf("\n");
    isFull(s);

    int d;
    printf("enter the number of elements you want to pop :\n");
    scanf("%d",&d);
    // poping elements from the stack 
    CheckSize(s);
    for(int i=0;i<d;i++)
    {
        printf("%d - element = %d\n",i+1,pop(s));
    }
    CheckSize(s);
    return 0;
}