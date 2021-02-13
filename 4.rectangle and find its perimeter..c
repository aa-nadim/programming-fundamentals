///4.	Write a C program to enter length and breadth of a rectangle and find its perimeter.
#include<stdio.h>
int main()
{

    int length,breadth;

    printf("Length = ");
    scanf("%d",&length);
    printf("Breadth = ");
    scanf("%d",&breadth);

    printf("The Rectangle's perimeter = %d\n",2*(length+breadth));

    getch();
}
