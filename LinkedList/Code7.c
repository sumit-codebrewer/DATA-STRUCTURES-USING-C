/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
struct node1
{
    int data;
    struct node1 *next;
}*head1=NULL;
void create()
{
    int ch;
    do
    {
        struct node *new_node,*current;
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(head==NULL)
        {
            head=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
        printf("\nDo you want to continue?(1 for Yes 0 for No):");
        scanf("%d",&ch);
    }while(ch!=0);
}

void display(struct node *st)
{
    struct node *temp;
    temp=st;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void split()
{
    struct node *temp;
    int val;
    printf("\nEnter the number after which you want to split:");
    scanf("%d",&val);
    temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    head1=temp->next;
    temp->next=NULL;
    printf("\nLinkedList 1:");
    display(head);
    printf("\nLinkedList 2:");
    display(head1);
}
int main()
{
    int ch;
    do
    {
        printf("\n1.Create LinkedList");
        printf("\n2.Display");
        printf("\n3.Split");
        printf("\n4.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:display(head);
                   break;
            case 3:split();
                   break;
            case 4:break;
            default:printf("\nWrong choice!!!");
        }
    }while(ch!=4);

    return 0;
}


