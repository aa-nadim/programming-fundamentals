
#include<stdio.h>
int main()
    {
        double c, f;

        printf("Enter temperature in celsius\n");
        scanf("%lf", &c);
        f = ((9 * c) / 5) + 32;
        printf("%.0lf Celsius is %.2lf farenhite\n",c,f);

        return 0;
    }

