/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Operations on Singly LinkedList
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void create()
{
    int val,ch;
    do
    {
        struct node *new_node,*current;
        new_node=(struct node *)malloc(sizeof(struct node));
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
        printf("\nDo you want to continue?(1 for YES | 0 for NO):");
        scanf("%d",&ch);
    }while(ch!=0);
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void insert_beg()
{
    struct node *new_node,*current;
        new_node=(struct node *)malloc(sizeof(struct node));
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
            new_node->next=head;
            head=new_node;
        }
}
void insert_last()
{
    struct node *new_node,*current;
        new_node=(struct node *)malloc(sizeof(struct node));
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
            current=head;
            while((current->next)!=NULL)
            {
                current=current->next;
            }
            current->next=new_node;
        }
}
void insert_mid()
{
    struct node *new_node,*current,*temp1,*temp2;
    int position;
        new_node=(struct node *)malloc(sizeof(struct node));
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
            temp1=head;
            printf("\nEnter the position at which you want to insert:");
            scanf("%d",&position);
            for(int i=0;i<position-2;i++)
            {
                temp1=temp1->next;
            }
            temp2=temp1->next;
            temp1->next=new_node;
            new_node->next=temp2;
        }
}
void search()
{
    struct node *temp;
    int found=0,val,index=0;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        printf("\nEnter the element you want to search:");
        scanf("%d",&val);
        temp=head;
        while(temp->next!=NULL)
        {
            if(temp->data==val)
            {
                found++;
                printf("\nElement found at %d position",(index+1));
                break;
            }
            temp=temp->next;
            index++;
        }
        if(found==0)
        {
            printf("\nNOT FOUND!!!");
        }
    }
}
void del_beg()
{
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        head=head->next;
    }
}
void del_mid()
{
    struct node *temp1,*temp2;
    int val;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        printf("\nEnter the value you want to delete:");
        scanf("%d",&val);
        if(val==head->data)
        {
            del_beg();
        }
        else
        {
            temp1=head;
            temp2=temp1->next;
            while((temp1->next)->data!=val)
            {
                temp1=temp1->next;
                temp2=temp2->next;
            }
            temp2=temp2->next;
            temp1->next=temp2;
        }
    }
}
void del_end()
{
    struct node *temp1,*temp2;
    if(head==NULL)
    {
        printf("\nLinkedList is Empty!!!");
    }
    else
    {
        temp1=head;
        temp2=temp1->next;
        while((temp2->next)!=NULL)
        {
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1->next=NULL;
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n____MAIN MENU FOR SINGLY LINKED LIST__");
        printf("\n1.Create");
        printf("\n2.Insertion at beginning");
        printf("\n3.Insertion at middle");
        printf("\n4.Insertion at end");
        printf("\n5.Deletion at beginning");
        printf("\n6.Deletion at middle");
        printf("\n7.Deletion at end");
        printf("\n8.Search");
        printf("\n9.Display");
        printf("\n10.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:insert_beg();
                   break;
            case 3:insert_mid();
                   break;
            case 4:insert_last();
                   break;
            case 5:del_beg();
                   break;
            case 6:del_mid();
                   break;
            case 7:del_end();
                   break;
            case 8:search();
                   break;
            case 9:display();
                   break;
            case 10:break;
            default:printf("\nWrong choice!!!");
        }
    }while(ch!=10);
    return 0;
}
