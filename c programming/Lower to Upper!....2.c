#include <stdio.h>
#include <string.h>

int main()
{
    int i,n;
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        char string[1000];
        gets(string);
        if(i!=0){
        printf("Case %d:",i);
        }
        printf("%s\n", strupr(string));
    }

    return 0;
}
