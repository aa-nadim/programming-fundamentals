#include<stdio.h>
int main()
    {
        int a;
        float b;
        char s  = 'D';
        char s1[10];

        printf("Enter integar number\n");
        scanf("%d", &a);
        printf("Integar number is %d\n", a);

        printf("Enter floating number\n");
        scanf("%f", &b);
        printf("Floating number is %f\n", b);

        printf("The character is %c\n", s);

        printf("Enter any string\n");
        scanf("%s", &s1);
        printf("The string is %s\n", s1);

        return 0;
    }
