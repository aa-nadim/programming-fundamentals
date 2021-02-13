#include<stdio.h>
int main()
{
    int i;
    char str1[]="My name is ";
    char str2[]="Nadim";

///compares two strings
    i = strcmp(str1,str2);

    if(i==0)
        printf("strings are equal");

    else
        printf("strings are not equal");
}

