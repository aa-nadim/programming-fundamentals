#include<stdio.h>
int main()
    {
        int a,b,c;
        scanf("%d %d", &a, &b);
        c = a+b;
        printf("Sum of two number is = %d\n", c);
        c = a-b;
        printf("Substraction of two number is = %d\n", c);
        c = a*b;
        printf("Multiplication of two number is = %d\n", c);
        c = a/b;
        printf("Division of two number is = %d\n", c);
        c = a%b;
        printf("Reminder of two number is = %d\n", c);

        return 0;
    }

