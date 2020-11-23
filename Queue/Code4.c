/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 5
int front=-1,rear=-1;

int pq[MAX][2];
int val,i,pr;
void insertion()
{
    printf("Enter the element you want to enter:");
    scanf("%d",&val);
    printf("Enter its priority:");
    scanf("%d",&pr);
    if(rear==MAX-1)
    {
        printf("Element cannot be inserted as priority queue is full!!");
    }else{
        rear++;
        pq[rear][0]=val;
        pq[rear][1]=pr;
    }
}
void display()
{
    printf("\nPriority queue matrix:");
    for(i=0;i<=rear;i++)
    {
        printf("\n%d %d",pq[i][0],pq[i][1]);
    }
    printf("\nNo of elements in the priority queue are: %d",(rear+1));
}
void deletion()
{
    int max=pq[0][1],row;
    if(rear<0)
    {
        printf("Priority queue is empty!!");
    }else{
        for(i=0;i<=rear;i++)
        {
            if(max>pq[i][1])
            {
                max>pq[i][1];
                row=i;
            }
        }
        printf("Row with the maximum priority:%d",(row+1));
        for(i=row;i<=rear;i++)
        {
            pq[i][0]=pq[i+1][0];
            pq[i][1]=pq[i+1][1];
        }
        rear--;
        display();
    }
}

int main()
{
    int ch;
    do{
       printf("\n__________MAIN MENU FOR PRIORITY QUEUE__________");
       printf("\n 1. Insertion");
       printf("\n 2. Deletion");
       printf("\n 3. Display all the elements");
       printf("\n 4. Exit");
       
       printf("\nEnter choice:");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:insertion();
                  break;
            case 2:deletion();
                   break;
            case 3:display();
                   break;
            case 4:break;
            default:printf("Wrong Choice!!");
       }
        
    }while(ch!=4);
}


