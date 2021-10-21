#include<stdio.h>
int main()
    {
        int r, d, c;
        scanf("%d", &r);
        d = 2 * r;
        printf("Diameter of circle %d\n", d);
        c=2*3.1416*r;
        printf("Circumference of circle %d\n", c);
        c=3.1416*r*r;
        printf("Area of circle %d\n", c);

        return 0;
    }

