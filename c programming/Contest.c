#include<stdio.h>
#include<string.h>
int main()
{/// , , ,  and .
    int n,i=0,x,y,z,j,k;
    char a[100];
    scanf("%s", a);
    x=(int)strstr(a,"Danil");
    y=(int)strstr(a,"Olya");
    z=(int)strstr(a,"Ann");
    j=(int)strstr(a,"Nikita");
    k=(int)strstr(a,"Slava");
    if(x!=0)
        i++;
    if(y!=0)
        i++;
    if(z!=0)
        i++;
    if(j!=0)
        i++;
    if(k!=0)
        i++;
    if(i<1)
    {
        printf("No\n");
    }
    else
        printf("Yes");
    return 0;
}
