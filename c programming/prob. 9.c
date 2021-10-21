
#include<stdio.h>
int main()
    {
        double c, f;

        printf("Enter temperature in farenhite\n");
        scanf("%lf", &f);
        c = 0.56 * (f-32);
        printf("%.2lf farenhite is %.2lf celsius\n", f, c);

        return 0;
    }
