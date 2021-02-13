
#include<stdio.h>
int main()
    {
        int d, y, w, a;
        printf("Enter days\n");
        scanf("%d", &d);
        y = d / 365;
        w = (d % 365) / 7;
        a = (d % 365) % 7;
        printf("%d days is %d year %d week %d days\n", d, y, w, a);

        return 0;
    }

