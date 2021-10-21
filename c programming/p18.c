///Problem 18: Write a C Program to reverse a number (for example input: 1234, output: 4321).

#include<stdio.h>

int main()
{
    int n,r,sum=0,temp;
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("reverse number: %d",sum);
getch();
}
