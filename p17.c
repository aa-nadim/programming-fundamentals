///Problem 17: Write a program that multiplies two matrices.

#include<stdio.h>
int main()
{
    int i,j,r1,r2,c1,c2,k,result[100][100];
    int sum=0;
    int A[100][100];
    int B[100][100];
    printf("Enter  the value of A matrices rows and column:\n");
    scanf("%d %d",&r1,&c1);

    printf("Enter  the value of B matrices rows and column:\n");
    scanf("%d %d",&r2,&c2);
    if(c1!=r2)
    {
        printf("Error!! please give the again  value of c1 equal  to r2 :\n");
        printf("Enter  the value of A matrices rows and column:\n");
        scanf("%d %d",&r1,&c1);

        printf("Enter  the value of B matrices rows and column:\n");
        scanf("%d %d",&r2,&c2);
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j=j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);

        }
        printf("\n");
    }
    printf("Enter the value of B matrics:\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j=j+1)
        {
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);

        }
        printf("\n");
    }
    printf("The multiflying matrices:\n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j=j+1)
        {
            for(k=0; k<c1; k++)
            {

                sum=sum+A[i][k]*B[k][j];
                result[i][j]=sum;
            }

            sum=0;

        }
        printf("\n");
    }
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j=j+1)
        {
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    }

    getch();
}

