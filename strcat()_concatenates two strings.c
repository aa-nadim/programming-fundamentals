#include<stdio.h>
int main()
{
    char str1[]="My name is ";
    char str2[]="Nadim";

///Add two strings
    strcat(str1,str2);

    printf("str1 = str1 + str2\n%s\n",str1);

}
