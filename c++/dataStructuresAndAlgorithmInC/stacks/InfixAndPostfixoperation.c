#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{
    int size;
    int top;
    char *ar;
};

int operator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

int pre(char ch)
{
    if(ch == '*' || ch == '/')
        return 2;
    else if(ch == '+' || ch == '-')
        return 1;
    else 
        return 0;
}

int isEmpty(struct stack*s)
{
    if(s->top == -1)
        return  1;
    else 
        return 0;
}
char stackTop(struct stack *s)
{
    return s->ar[s->top];
}

char pop(struct stack *s)
{
    if(isEmpty(s)){
        printf("Stack underflow!! cannot pop items from the stack");   
    }
    else
    {
        char a = s->ar[s->top];
        s->top--;
        return a;
    }
}

char postfix(char *ar,int length)
{
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->ar = (char*)malloc(sp->size *sizeof(char));
    char *pos = (char*)malloc(length+1*sizeof(char));
    sp->top = -1;
    sp->size = length;

    int i =0;
    int j=0;
    while(ar[i]!='\0')
    {
        if(!operator(ar[i]))
        {
            pos[j]=ar[i];
            j++;
        }
        else
        {
            if(pre(ar[i])>pre(stackTop(sp)))
            {
                push(sp,ar[i]);
            }
            else
            {
                pos[j] =pop(sp);
                j++;
            }
        }
        i++;
    }
    while(!(isEmpty(sp)))
    {
        pos[j]=pop(sp);
        j++;
    }
    pos[j] = '/0';
    return pos;
}

int main()
{
    char *ar;
    int n;
    // printf("Enter the size of the expression");
    ar = (char*)malloc(100*sizeof(char));
    gets(ar);

    printf("%s",postfix(ar,strlen(ar)));

  return 0;
}