#include<stdio.h>
int main()
{
    int a[100]={30,23,4,6,24,65,78,7,9,10};
    int key=6,i;

    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            printf("Find at : %d\n",i+1);
            return;
        }
    }
    printf("Not found\n");

    return 0;
}
