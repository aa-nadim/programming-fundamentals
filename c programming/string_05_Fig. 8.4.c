#include<stdio.h>
main()
{

    char str[80];
    int i,vowel,consonant;
    i=vowel=consonant=0;

    printf("Enter a string \n");

    gets(str);

    while(str[i])
    {
        if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
            vowel++;
        else
            consonant++;

        i++;
    }

    printf("Number of vowels : %d\n",vowel);
    printf("number of consonants : %d\n",consonant);

    getch();
}


