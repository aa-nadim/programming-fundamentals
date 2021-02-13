#include<stdio.h>
int main()
    {
        int a, b, c;
        printf("Enter any two angle of triangle\n");
        scanf("%d %d", &a, &b);
        c = 180 - (a + b);
        printf(" Third angle is %d", c);

        return 0;
    }

