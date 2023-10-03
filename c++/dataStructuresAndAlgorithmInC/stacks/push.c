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
        printf("stack is not full!!");
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
    isempty(s);
    printf("\n");
    isFull(s);
    for(int j=0;j<a;j++)
    {
        printf("\nenter the %d - value : ",j+1);
        int d;
        scanf("%d",&d);
        pushh(s,d);
    }
    //check
    printf("checking whether the stack is full or not\n");
    isempty(s);
    printf("\n");
    isFull(s);
    return 0;
}