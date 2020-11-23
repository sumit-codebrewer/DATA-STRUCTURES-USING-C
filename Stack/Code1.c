/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 6
int top=-1,i,val;
int stack[MAX];
void push()
{
   printf("\nEnter the element you want to insert:");
   scanf("%d",&val);
   if(top==MAX-1)
   {
       printf("\nStack overflow!!!");
   }
   else
   {
       top=top+1; 
       stack[top]=val;
   }
}
void pop()
{
    if(top==-1)
    {
        printf("\nStack underflow!!!");
    }
    else
    {
        val=stack[top];
        top=top-1;
    }
    printf("\nValue deleted is %d",val);
}
void peek()
{
    printf("Element at the peek is %d",stack[top]);
}
void display()
{
    for(i=0;i<=top;i++)
    {
        printf("\n%d",stack[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("\n______MAIN MENU FOR STACK______");
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Display");
        printf("\n5.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:break;
            default:printf("\nWrong choice");
        }
    }while(ch!=5);
    return 0;
}

