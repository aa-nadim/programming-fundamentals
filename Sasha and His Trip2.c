#include<stdio.h>
int main()
{
    int i, j=0, n, v, a, tk=0;
    scanf("%d%d", &n, &v);
    if(n<=v || n==(v+1))
        tk=v;
    else
    {
        for(i=1;i<n;i++)
        {
            a=v*i;
            tk=tk+a;
            v--;
            j=a+j;
            if(j==n)
                break;
        }
    }
    printf("%d\n", tk);
    return 0;
}
