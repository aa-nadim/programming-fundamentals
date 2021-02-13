///5.	Write a C program to enter length and breadth of a rectangle and find its area.
#include<stdio.h>
int main()
{

    int length,breadth;

    printf("Length = ");
    scanf("%d",&length);
    printf("Breadth = ");
    scanf("%d",&breadth);

    printf("The Rectangle's area = %d\n",length*breadth);

    getch();
}
