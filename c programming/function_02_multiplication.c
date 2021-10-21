#include<stdio.h>
main()
{
    float num2,num1,re;
    scanf("%f\n%f",&num1,&num2);

    re=mul(num1,num2); ///need a function name "multiply"

    printf("Multiply = %f\n",re);
}
float mul(float x,float y)///???????????????????///
{
    float result;
    result = x * y;
    return (result);
}
