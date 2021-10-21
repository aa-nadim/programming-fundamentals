#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter any number = ");
    scanf("%d\n",&n);
    i=1;
    while(i<=n){
        sum=sum+i;
        printf("odd natural number = %d\n",i);
        i=i+2;
    }

    printf("sum of odd = %d\n",sum);
    return 0;
}

