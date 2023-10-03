#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void solve(struct node *head,int n,int data){
    int mid = n/2;
    struct node *temp = head;
    while(mid--){
        temp = temp->next;
    }
    if(temp->data == data){
        printf("element found !!")
    }
    else if(temp->data > data){
        solve(head,mid,data);
    }
    else{
        solve(temp,mid,data);
    }
    
}
// void binarySearch(struct node *head,int n)
// {
//     int mid = n/2;
//     binarySearch(head,mid)
// }
struct node *create(struct node *head)
int main()
{
    int n;
    printf("enter the number of nodes : ");
    scanf("%d",&n);



    return 0;
}