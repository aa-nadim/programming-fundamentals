///Problem 15: Write a program that read and display  matrix.

#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3];
    printf("Enter  the value of (3*3) order matrices:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j=j+1)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("The  A matrics:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j=j+1)
        {

            printf("%d ",A[i][j]);

        }
        printf("\n");
    }
    getch();
}

