///Problem 20: Write a C program to concatenate two strings.

#include<stdio.h>
int main()
{
    char s1[]="My name is ";
    char s2[]="Nadim";

    strcat(s1,s2);
    printf("Concatination of those strings :%s",s1);

    getch();
}
