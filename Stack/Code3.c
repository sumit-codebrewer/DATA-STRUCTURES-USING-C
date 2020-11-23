/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<ctype.h>
#define MAX 15
#define SIZE 15

int stack[MAX];
int top=-1;

void push(int item)
{
    if(top>=MAX-1)
    {
        printf("Stack overflow!!!");
    }else{
        top++;
        stack[top]=item;
    }
}
int pop()
{
    int item;
    if(top==-1)
    {
      printf("Stack underflow!!!");
      return;
    }else{
        item=stack[top];
        top--;
        return item;
    }
}
void forPostfix(char postfix[])
{
    int i,val,first,second;
    char ch;
    for(i=0;postfix[i]!=')';i++)
    {
        ch=postfix[i];
        if(isdigit(ch))
        {
            push(ch-'0');
        }else if(ch=='+'||ch=='-'||ch=='/'||ch=='*')
        {
            first=pop();
            second=pop();
            switch(ch)
            {
                case '+':val=second+first;
                         break;
                case '-':val=second-first;
                         break;
                case '*':val=second*first;
                         break;
                case '/':val=second/first;
                         break;
            }
            push(val);
        }
    }
    printf("Result of expression is %d \n",pop());
}
int main()
{
    int i;
    char postfix[SIZE];
    printf("Enter the postfix expression and \n click right parenthesis for result...");
    for(i=0;i<=SIZE-1;i++)
    {
        scanf("%c",&postfix[i]);
        if(postfix[i]==')')
        {
            break;
        }
    }
    forPostfix(postfix);

    return 0;
}


