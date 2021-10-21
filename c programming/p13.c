///Problem 13: Write a C program to count upper case, lower case and special characters in a string.

#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i,upper=0,lower=0,other=0;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            upper++;
        else if(str[i]>='a'&&str[i]<='z')
            lower++;
        else
            other++;
    }
    printf("Number of upper latter=%d\n",upper);
    printf("Number of lower latter=%d\n",lower);
    printf("Number of others sign=%d\n",other);

    getch();

}
