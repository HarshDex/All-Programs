#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{
    int top;
    int size;
    char *ar;
};
int isFull(struct stack *s)
{
    if(s->top == s->size-1)
        return 1;
    else
        return 0;
}
int isEmpty(struct stack * s)
{
    if(s->top == -1)
        return 1;
    else 
        return 0;
}
void push(struct stack *s,char val)
{
    if(isFull(s))
        printf("Stack overflow !! cannot push the %d in the stack:",val);
    else
    {
        s->top++;
        s->ar[s->top] = val;
    }
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
int isMatch(char a,char b)
{
    if( a=='(' && b == ')')
        return 1;
    if( a == '{' && b == '}')
        return 1;
    if(a == '[' && b == ']')
        return 1;
    else 
        return 0;
}
int isMatching(char *exp,int l)
{
    struct stack *sp;
    sp->size = l;
    sp->top = -1;
    sp->ar = (char *)malloc(sp->size*sizeof(char));

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i] == '(' || exp[i] == '{' ||exp[i] == '[' )
        {
            push(sp,exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' ||exp[i] == ']')
        {
            if(isEmpty(sp))
                return 0;
            else
            {
                char ch = pop(sp);
                if(!isMatch(ch,exp[i]))
                    return 0;
            }
        }
        
    }
    if(isEmpty(sp))
        return 1;
    else 
        return 0;
}
int main()
{
    char *str = "[1+{34-5+(12+3)}]";
    //printf("Enter the Expression : ");
    
    int l;
    l = strlen(str);
    if(isMatching(str,l))
        printf("Expression is balanced \n");
    else 
        printf("Expression is not balanced !!\n");

    printf("Thankyou!!");
    return 0;
}
