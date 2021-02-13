///2.Write a C program to enter two numbers and find their sum.
#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("Enter number number1 = ");
    scanf("%d",&a);

    printf("Enter number number2 = ");
    scanf("%d",&b);

    sum = a + b;
    printf("sum of the two numbers = %d",sum);

    getch();
}
