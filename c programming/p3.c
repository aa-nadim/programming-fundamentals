///Problem 3: Write a C program to print all even and odd numbers from 1 to N.

#include<stdio.h>
int main()
{
    int i,n=100;

    printf("Even numbers:");
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            printf("  %d",i);
    }

    printf("\n\nOdd numbers:");
    for(i=1;i<=100;i++)
    {
        if(i%2!=0)
            printf("  %d",i);
    }

    getch();
}
