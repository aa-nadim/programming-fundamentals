///Problem 2: Write a C program to print all prime numbers from 1 to N.

#include<stdio.h>
int main()
{
    int i,j,count=0;
    printf("Prime numbers:");

    for(i=2; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        printf(" %d",i);
            count=0;

    }
    getch();
}
