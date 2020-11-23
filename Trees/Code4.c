/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Height of subtree in BST and Total number of nodes in BST
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;
void inorder(struct node *rt)
{
    if(rt==NULL)
    return;
    inorder(rt->left);
    printf("%d ",rt->data);
    inorder(rt->right);
}
int height(struct node *root)
{
    int leftht,rightht;
    if(root==NULL)
    {
        return;
    }
    else
    {
        leftht=height(root->left);
        rightht=height(root->right);
        if(leftht>rightht)
        {
            return (leftht+1);
        }
        else
        {
            return (rightht+1);
        }
        
    }
    
}
int total(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        return(total(root->left)+total(root->right)+1);
    }
    
}
void create()
{
    int val,ch;
    struct node *NN,*temp,*parent;
    do
    {
        printf("\nEnter the value you want to insert:");
        scanf("%d",&val);
        NN=(struct node*)malloc(sizeof(struct node));
        NN->data=val;
        NN->left=NULL;
        NN->right=NULL;
        
        temp=root;
        if(root==NULL)
        {
            root=NN;
        }
        else
        {
            while(temp!=NULL)
            {
                parent=temp;
                if(val>temp->data)
                {
                    temp=temp->right;
                }
                else
                {
                    temp=temp->left;
                }
            }
            if(val<parent->data)
            {
                parent->left=NN;
            }
            else
            {
                parent->right=NN;
            }
        }
        printf("\nDo you want to continue?(1 or 0)");
        scanf("%d",&ch);
    }while(ch!=0);
    inorder(root);
    printf("\nHeight of Subtree is %d",height(root));
    printf("\nTotal number of nodes in BST is %d",total(root));
}
int main()
{
    create();

    return 0;
}


