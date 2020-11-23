/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int linearsearch1(int a[5],int x)
{
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int linearsearch2(int a[],int size,int x)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int linearsearch3(int *a,int x)
{
    int i;
    int size=5;
    for(i=0;i<size;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[5],i,r1,r2,r3,x;
    printf("Enter array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter number you want to search:");
    scanf("%d",&x);
    r1=linearsearch1(a,x);
    r2=linearsearch2(a,5,x);
    r3=linearsearch3(a,x);
    printf("\nElement found at %d position",(r1+1));
    printf("\nElement found at %d position",(r2+1));
    printf("\nElement found at %d position",(r3+1));
    

    return 0;
}

