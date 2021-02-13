#include<stdio.h>
int main()
{
    int a[]={9,8,7,6,5,4,3,2,1,0};
    int i,j,k,temp,n;
    for(k=0;k<10;k++)
    {
        for(i=0,j=i+1;i<10-1;i++,j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[j]=a[i];
                a[i]=temp;
            }
            for(z=0;z<10)
        }


    }
    return 0;
}
