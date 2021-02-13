///Problem 16: Write a program that adds two matrices.

#include<stdio.h>
int main()
{
    int i,j;
    int A[3][3];
    int B[3][3],C[3][3];
    printf("Enter  the value of A(3*3) order matrices:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j=j+1)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("Enter the value of B matrics:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j=j+1)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }
    printf("print the the value of C(A+B) matrics:\n");
    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j=j+1)
        {
            printf("%d ",A[i][j]+B[i][j]);


        }
        printf("\n");
    }
    getch();
}
