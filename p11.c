///Problem 11: Write a C program to print string one by one characters using loop.

#include<stdio.h>
int main()
{
    char latter[30];
    int i;
    gets(latter);

    for(i=0;latter[i]!='\0';i++)
    {
        printf("latter[%d] =%c\n",i,latter[i]);
    }
     getch();
}
