///Problem 1 : Write a programe  to find the factorial of a number.

#include<stdio.h>
int main()
{
    int i,n=5;
    int mult=1;
    for(i=1; i<=5; i++)
    {
        mult=mult*i;
    }

    printf("mult=%d",mult);
    return 0;
}
