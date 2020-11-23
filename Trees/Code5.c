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
    int data;
    struct node *left;
    struct node *right;
}*root=NULL;
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
struct node *min(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        while(root->left!=NULL)
        {
            root=root->left;
        }
        return root;
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
        NN=(struct node *)malloc(sizeof(struct node));
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
            if(val>parent->data)
            {
                parent->right=NN;
            }
            else
            {
                parent->left=NN;
            }
        }
        printf("\nDo you want to continue?(0 or 1)");
        scanf("%d",&ch);
    }while(ch!=0);
    inorder(root);
}
struct node *del(struct node *root,int val)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(val>root->data)
        {
            root->right=del(root->right,val);
        }
        else if(val<root->data)
        {
            root->left=del(root->left,val);
        }
        else
        {
            if(root->left==NULL) //One leftb child
            {
                struct node *temp=root->right;
                return temp;
            }
            else if(root->right==NULL)  //One right child
            {
                struct node *temp=root->left;
                return temp;
            }
            else
            {
                struct node *temp=min(root->right);
                root->data=temp->data;
                root->right=del(root->right,temp->data);
            }
            
            
        }
    }
}
int main()
{
    int val;
    create();
    printf("\nEnter the value you want to delete:");
    scanf("%d",&val);
    root=del(root,val);
    inorder(root);
    return 0;
}

