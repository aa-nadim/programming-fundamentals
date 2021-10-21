#include<stdio.h>
int main()
{
    int m, b, a, j;
    scanf("%d", &m);
    if(m%2==0)
    {
        b=m/2;
        a=2;
        printf("%d\n", b);
        for(j=1;j<=b;j++)
            printf("%d ",a);
        printf("\n");
    }
    else
    {
        b=m/2;
        a=2;
        printf("%d\n", b);
        for(j=1;j<b;j++)
            printf("%d ",a);
        printf("3\n");
    }
    return 0;
}
