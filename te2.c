#include<stdio.h>
int main()
{
    int a[100]={3,7,10,14,17,21,24,27,34,56};
    int str=0,end=9,key=14,mid;

    while(str<=end)
    {
        mid=(str+end)/2;
        if(a[mid]==key)
        {
            printf("Find at :%d\n",mid+1);
            break;
        }
        else if(a[mid]>key)
            end=mid-1;
        else
            str=mid+1;
    }
    if(str>end)
        printf("Not Found\n");
    return 0;

}
