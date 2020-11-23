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
    struct node *left;
    struct node *right;
};
struct node *create(int d)
{
    struct node *NN=(struct node*)malloc(sizeof(struct node));
    NN->data=d;
    NN->left=NULL;
    NN->right=NULL;
    return NN;
}
void inorder(struct node *root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct node *root)
{
    if(root==NULL)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int main()
{
    struct node *root=create(12);
    root->left=create(13);
    root->right=create(14);
    
    (root->left)->left=create(34);
    (root->left)->right=create(35);
    
    (root->right)->left=create(70);
    (root->right)->right=create(75);
    
    printf("\nInorder traversal:");
    inorder(root);
    
    printf("\nPreorder traversal:");
    preorder(root);
    
    printf("\nPostorder traversal:");
    postorder(root);

    return 0;
}

