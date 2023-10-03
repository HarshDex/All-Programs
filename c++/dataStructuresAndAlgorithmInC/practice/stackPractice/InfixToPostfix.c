#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    int size;
    char *ar;
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
char pop(struct stack *sp)
{
    if(isEmpty(sp))
        printf("Stack underflow!!");
    else
        return sp->ar[sp->top--];
}

void push(struct stack *sp,char c)
{
    if(isFull(sp))
        printf("stack overflow!!");
    else
    {
        sp->top++;
        sp->ar[sp->top] =c;
    }
}
int isBracket(char c)
{
    if(c == "(" || c == ")")
        return 1;
}
int isOpen(char c)
{
    if(c == "(")
        return 1;
}
int check(struct stack *sp)
{
    char c = pop(sp);
    if(!isBracket(c))
        return 0;
    
}
int main()
{
    int size;
    printf("enter the size of the stack : ");
    scanf("%d",&size);

    struct stack *sp;
    sp->size = size;

    sp->ar = (char*)malloc(sp->size * sizeof(char));

    printf("enter the length of the  expression : ");
    int n;
    scanf("%d",&n);

    for(int i =0;i<n;i++)
    {
        char c;
        push(sp,c);
    }

    if(check(sp))
        printf("expression is balanced");
    else
        printf("expression is not balanced!!");

    return 0;
}