
#include<stdio.h>
int main()
    {
        int a, t = 0, avg, per, i;
        for(i = 1; i <= 5; i++)
        {
        printf("subject %d", i);
        scanf("%d", &a);
        t = t + a;
        }
        printf("Total marks %d \n", t);
        avg = t / 5;
        printf(" Average marks %d\n", avg);
        per = t / 100;
        printf("Percentage is %d%%",per);

        return 0;
    }
