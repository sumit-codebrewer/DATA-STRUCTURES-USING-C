/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 6
int a[MAX];
int i,val;
int rearA=-1,rearB=MAX;
int frontA=-1,frontB=MAX;
void insert_A()
{
    int num;
    printf("Enter a number to be inserted:");
    scanf("%d",&num);
    if(rearA-rearB==1)
    {
        printf("Multiple Queue is full!!!");
    }else if(frontA==-1&&rearA==-1){                  //First insertion
        frontA=0;
        rearA=0;
        a[rearA]=num;
    }else{
        rearA++;
        a[rearA]=num;
    }
}
void insert_B()
{
    int num;
    printf("Enter a number to be inserted:");
    scanf("%d",&num);
    if(rearA-rearB==1)
    {
        printf("Multiple Queue is full!!!");
    }else if(frontB==MAX&&rearB==MAX){                  //First insertion
        frontB=MAX-1;
        rearB=MAX-1;
        a[rearB]=num;
    }else{
        rearB--;
        a[rearB]=num;
    }
}
void delete_A()
{
    if(frontA==-1)
    {
        printf("Multiple Queue is empty!!!");
    }else{
        val=a[frontA];
       printf("Value deleted is %d",val);
       frontA++;
    }

}
void delete_B()
{
    if(frontB==-1)
    {
        printf("Multiple Queue is empty!!!");
    }else{
        val=a[frontB];
       printf("Value deleted is %d",val);
       frontB--;
    }
}
void display_A()
{
    printf("QUEUE A:");
     for(i=frontA;i<=rearA;i++)
     {
         printf("%d,",a[i]);
     }
}
void display_B()
{
   
    for(i=frontB;i>=rearB;i--)
    {
        printf("%d,",a[i]);
    }
}
int main()
{
    int ch;
    do{
        printf("\nMAIN MENU FOR MULTIPLE QUEUE");
        printf("\n1.Insert in Queue A");
        printf("\n2.Insert in Queue B");
        printf("\n3.Delete in Queue A");
        printf("\n4.Delete in Queue B");
        printf("\n5.Display in Queue A");
        printf("\n6.Display in Queue B");
        printf("\n7.Exit");
        
        printf("\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_A();
                   break;
            case 2:insert_B();
                   break;
            case 3:delete_A();
                   break;
            case 4:delete_B();
                   break;
            case 5:display_A();
                   break;
            case 6:display_B();
                   break;
            case 7:break;
            default:printf("Wrong choice!!");
        }
    }while(ch!=7);

    return 0;
}


