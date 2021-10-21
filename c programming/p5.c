///Problem 5: Write a C program to print all leap years from 1 to N.

#include<stdio.h>
int main()
{
    int i,n=2018;
    printf("All leap years:\n");
    for(i=1;i<=n;i++)
    {
        if(i%400==0)
            printf("\n%d ",i);

        else if(i%4==0 && i%100!=0)
            printf("\n%d ",i);

    }
    getch();
}
