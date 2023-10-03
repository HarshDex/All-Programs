#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printData(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
}
struct node *create(struct node *head,int data){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;
    if(head == NULL)
        return p;
    struct node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = p;
    return head;
}
struct node *del(struct node *head,int data){
    if(head->next == NULL && head->data == data)
    {
        free(head);
        return NULL;
    }
    if(head->data == data){
        struct node *p = head->next;
        free(head);
        return p;
    }
    struct node *prev = head;
    struct node *temp = head->next;
    int flag = 0;
    while(temp->data != data && temp->next!=NULL){
        temp = temp->next;
        prev = prev->next;
    }
    if(temp->data == data){
        prev->next = temp->next;
        free(temp);
        flag++;
    }
    if(flag == 0){
        printf("element not found\n");
    }
    else
        printf("element is successfully deleted\n");
    return head;
}
int main()
{
    int n;
    printf("enter the number of nodes you want to create : ");
    scanf("%d",&n);

    struct node *head = NULL;
    printf("enter data in the linked list : \n");
    for(int i =0;i<n;i++){
        int a;
        printf("enter element : ");
        scanf("%d",&a);
        head = create(head,a);
    }
    printf("printing the linked list : ");
    printData(head);
    int a;
    printf("\nenter the element which you want to delete : ");
    scanf("%d",&a);
    head = del(head,a);
    printData(head);
    return 0;
}