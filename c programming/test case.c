#include<stdio.h>
int main()
{
    int n,i,temp,j,dis,test,m,k;

    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        int a[n], max=-1, min=1000;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
        }
        dis=(max-min)*2;
        printf("%d\n",dis);
    }

    return 0;
}
