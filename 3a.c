#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("enter any number = ");
    scanf("%d\n",&n);
   for(i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
           printf("%d",i);
           sum=sum+i;
       }

   }

    printf("sum of odd = %d\n",sum);
    getch();
}

