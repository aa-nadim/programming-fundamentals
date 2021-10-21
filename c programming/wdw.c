#include<stdio.h>
#include<math.h>
int main()
{
    int  b, k, i, m=1 ,sum=0, a[10000],n;
    scanf("%d%d", &b, &k);
    for(i=0;i<k;i++)
    {
        scanf("%d", &a[i]);
        n=pow(p,(q-m));
        sum=sum+(a[i]*n);
        m++;
    }
    if(sum%2==0)
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}
