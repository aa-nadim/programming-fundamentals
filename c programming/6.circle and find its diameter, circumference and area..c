///6.	Write a C program to enter radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
#define PI 3.1416
int main()
{

    int radius ;

    printf("Enter radius of a circle = ");
    scanf("%d",&radius);


    printf("The circle's diameter = %d\n",2*radius);
    printf("The circle's circumference = %f\n",2*PI*(float)radius);
    printf("The circle's area = %f\n",(float)PI*radius*radius);

    getch();
}
