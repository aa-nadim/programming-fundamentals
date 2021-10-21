///Problem 4: Write a C program to print square, cube and square root of all numbers from 1 to N.

#include<stdio.h>
#include<math.h>
int main()
{
    int i,n=20;

    printf("Squires all number of range:\n\n");
    for(i=1;i<=n;i++)
    {
     printf("%d*%d=%d\n",i,i,i*i);
    }

    printf("\n\nCube all the numbers:\n\n");
    for(i=1;i<=n;i++)
    {
        printf("%d*%d*%d=%d\n",i,i,i,i*i*i);
    }

    printf("\n\nSquire root all the numbers:\n\n");
    for(i=1;i<=n;i++)
    {
        printf("squire root of %d= %lf\n",i,sqrt(i));
    }

    getch();
}
