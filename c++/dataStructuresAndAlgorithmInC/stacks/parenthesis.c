#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack 
{
  int size;
  int top;
  char *ar;
};
int isempty(struct stack *ptr)
{
  if(ptr->top == -1)
  {
    return 1;
  }
  else 
  {
    return -1;
  }
}
int isfull(struct stack *ptr)
{
  if(ptr->top == ptr->size-1)
  {
    return 1;
  }
  else 
  {
    return -1;
  }
}
void push(struct stack *s,char data)
{
    if(isfull(s))
        printf("stack overflow!!");
    else{
    s->top++;
    s->ar[s->top]=data;
    }
}
char pop(struct stack *stack)
{
    if(isempty(stack))
        printf("stack underflow!!");
    else{
    char data = stack->ar[stack->top];
    stack->top--;
    return data;
    }
}
int isParenthesis(char *exp,int l)
{
    struct stack *s;
    s->size = l;
    s->top = -1;
    s->ar = (struct stack *)malloc(sizeof(struct stack));
    for(int i =0;exp[i]!='\0';i++)
    {
        if(exp[i] == '(')
        {
            push(s,'(');
        }
        else if( exp[i] == ')')
        {
            if(isempty(s))
                printf("stack underflow");
            else
                pop(s);
        }
        if(isempty(s))
            return 1;
        else
            return 0;
    }

}
int main()
{
    char expression[100];
    printf("Enter the expression : ");
    gets(expression);
    int l;
    l = strlen(expression);
    if(isParenthesis(expression,l))
        printf("Expression is balanced");
    else 
        printf("Expression is not balanced");
    
}