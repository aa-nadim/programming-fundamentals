///Problem 10: Write a C program to print following Pyramid:
///A
///ABA
///ABCBA
///ABCDCBA
///ABCDEDCBA

#include<stdio.h>
int main()
{
    int m=65;
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",m++);
        }

        m--;
        for(j=1;j<=(i-1);j++)
        {
            printf("%c",m=m-1);
        }

        m=65;
        printf("\n");
    }

    return 0;
}
