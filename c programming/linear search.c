#include<stdio.h>
int main()
{
    int item,i,ara[10]={1,2,3,4,5,6,7,8,9,10};
    scanf("%d",&item);
    for(i=0;i<10;i++)
    {
        if(ara[i]==item){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("Not found");
    return 0;
}
