///Problem  12 :  Write  a  C program to print all vowel  consonant characters  separately.
#include<stdio.h>
int main()
{
    char s[100];
    int i;
    gets(s);

    printf("vowel:\n");
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            printf("%c ",s[i]);
    }
    printf("\nConsonant:\n");
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>'A'&&s[i]<'E'||s[i]>'E'&&s[i]<'I'||s[i]>'I'&&s[i]<'O'||s[i]>'O'&&s[i]<'U'||s[i]>'U'&&s[i]<='Z'||s[i]>'a'&&s[i]<'e'||s[i]>'e'&&s[i]<'i'||s[i]>'i'&&s[i]<'o'||s[i]>'o'&&s[i]<'u'||s[i]>'u'&&s[i]<='z')
            printf("%c ",s[i]);
    }
    getch();
}
