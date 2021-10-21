///Problem 14: Write a C program to convert string in upper case and lower case

#include<stdio.h>
int main()
{
    char s1[]="nstu";
    char s2[]="ice";
    printf("the converted from lowercase to uppercase:%s\n",strupr(s1));
    printf("the converted from upperercase to lowercase:%s\n",strlwr(s2));
    getch();
}
