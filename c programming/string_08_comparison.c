#include<stdio.h>
int main()
{
    int i;
    char str1[]="Abdul",str2[]="Awal";

    i=0;
    while(str1[i]==str2[i]&&str1[i]!='\0'&&str2[i]!='\0')
        i++;

    if(str1[i]=='\0'&&str2[i]=='\0')
        printf("string are equal\n");
    else
        printf("string are not equal\n");
}

