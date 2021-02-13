#include<stdio.h>
int main()
{
    int num,hv,amount,money,i;
    scanf("%d%d",&num,&hv);
    amount=num-1;

    for(i=2;i<=num-hv;i++){
          money=hv+(amount-hv)*i;
    }
    printf("%d",money);

    return 0;
}
