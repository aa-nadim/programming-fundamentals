#include<stdio.h>
int main()
{
    int a, b=2;
    double c, n, x;
    while(scanf("%d", &a)==1){
    c=a;
    x=b;
    n=pow(c,x);
    printf("%lf\n", n);
    }
    return 0;
}
