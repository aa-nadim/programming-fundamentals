#include<stdio.h>
int main()
{
    int num1,num2,num3,result;
    num1=10;
    num2=30;
    num3=5;

    result=sum(num1,num2,num3); ///need a function name "sum"

    printf("Sum=%d\n",result);
}

int sum(int a,int b,int c)
{
    return a+b+c;
}
