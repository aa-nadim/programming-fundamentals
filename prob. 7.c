
#include<stdio.h>
#define CENTIMETER 100
#define METER 1000
int main()
    {
        int a, b, c, s;
        printf("Enter the length in centimeter\n");
        scanf("%d", &a);
        s = METER * CENTIMETER;
        b = a / s;
        c = (a % s) / CENTIMETER;
        printf("%d Centimeter is %d kilometer and %d meter\n", a, b, c);

        return 0;
    }
