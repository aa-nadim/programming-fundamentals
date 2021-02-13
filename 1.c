#include<stdio.h>
int main()
    {
        int n;
        scanf("%d",&n);
        int a[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {

            if(a[i]>=0)
                printf("Case %d: %d is a valid result\n",i+1,a[i]);
            else
                printf("Case %d: %d is not a valid result\n",i+1,a[i]);
        }

        return 0;
    }

