#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *ar;
};
int isoperator(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else 
        return 0;
}
int precedence(char ch){
    if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
}
int isEmpty(struct stack *sp){
    if(sp->top == -1)
        return 1;
    else    
        return 0;
}
int isFull(struct stack *sp){
    if(sp->top == sp->size-1)
        return 1;
    else 
        return 0;
}
void push(struct stack *sp,char data){
    sp->top++;
    sp->ar[sp->top] = data;
}
char pop(struct stack *sp){
    char a = sp->ar[sp->top];
    sp->top--;
    return a;
}
char *convert(char s[],struct stack *sp,int len){
    char postfix[len];
    int i =0;
    int j = 0;
    while(s[i] != '\0')
    {
        if(!isoperator(s[i])){
            postfix[j] = s[i];
            i++;j++;
        }
        else
        {
            if(precedence(s[i]) > precedence(sp->ar[sp->top]))
                push(sp,s[i]);
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))    
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    struct stack *sp;
    sp = (struct stack*)malloc(sizeof(struct stack));
    printf("enter the size of the stack : ");
    scanf("%d",&sp->size);
    sp->ar = (char*)malloc(sp->size*sizeof(char));
    sp->top = -1;

    char exp[10];
    printf("enter the expression : ");
    scanf("%s",exp);
    printf("converting to infix expression : ");
    printf("\ninfix expression : ");
    printf("%s",exp);
    int len = strlen(exp);
    char *postfix = convert(exp,sp,len);
    printf("postfix operation : %s",postfix);
    return 0;
}