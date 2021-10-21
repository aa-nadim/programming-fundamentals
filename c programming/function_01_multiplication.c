#include<stdio.h>
int main()
{
    int num1,num2,result;
    num1=10;
    num2=3;

    result=multiply(num1,num2); ///need a function name "multiply"

    printf("Multiply = %d\n",result);
}

int multiply(int a,int b)
{
    return a*b;
}
