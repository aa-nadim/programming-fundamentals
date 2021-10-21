#include<stdio.h>
int main()
{
    int a, n;
    scanf("%d", &a);
    if(a%5==0)
        n=a/5;
    else
        n=a/5+1;
    printf("%d\n", n);
    return 0;

}
