/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
    struct node *prev;
}*head=NULL;
struct node1
{
    struct node1 *next;
    int data;
    struct node1 *prev;
}*head1=NULL;
void create()
{
    int ch,val;
    do
    {
        struct node *NN,*current;
        NN=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter data:");
        scanf("%d",&val);
        NN->data=val;
        NN->prev=NULL;
        NN->next=NULL;
        if(head==NULL)
        {
            head=NN;
            current=NN;
        }
        else
        {
            current->next=NN;
            NN->prev=current;
            current=NN;
        }
        printf("\nDo you want to continue?(1 for Yes 0 for No):");
        scanf("%d",&ch);
    }while(ch!=0&&ch==1);
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


