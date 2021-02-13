#include<stdio.h>
int main()
{
    int num,result;
    scanf("%d",&num);

    result = square(num); ///need a function name "square"

    printf("Square=%d\n",result);
}

int square(int a)
{
    int result;
    result = a*a;
    return(result);
}
