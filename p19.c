///Problem 19  : Write a C program to read a string and print the length of each word.

#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b,i;
    char n[100];
    scanf("%[^\n]",n);
    for(i=0;n[i]!='\0';i++)
    {
        if(n[i]==' ')
        {
        printf("%d\n",a);
            a=0;
        }
         if(n[i]!=' ')
        a++;

    }
      printf("%d\n",a);
}
