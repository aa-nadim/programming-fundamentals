///3.	Write a C program to enter two numbers and perform all arithmetic operations.
/// + - * / %
#include<stdio.h>
int main()
{

    int a,b;


    printf("Enter number number1 = ");
    scanf("%d",&a);

    printf("Enter number number2 = ");
    scanf("%d",&b);

    printf("Addition of the two numbers = %d\n",a+b);
    printf("Subtraction of the two numbers = %d\n",a-b);
    printf("Multiplication of the two numbers = %d\n",a*b);
    printf("Division of the two numbers = %f\n",(float)a/b);
    printf("Modulo Division of the two numbers = %d",a%b);


    getch();
}
