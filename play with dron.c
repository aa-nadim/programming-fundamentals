#include<stdio.h>
#include<string.h>
int main()
{
    int num, i, sum=0;
    char a[15];
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        scanf("%s", a);
        if(strcmp(a,"Tetrahedron")==0)
            sum=sum+4;
        else if(strcmp(a,"Cube")==0)
            sum=sum+6;
        else if(strcmp(a,"Octahedron")==0)
            sum=sum+8;
        else if(strcmp(a,"Dodecahedron")==0)
            sum=sum+12;
        else if(strcmp(a,"Icosahedron")==0)
            sum=sum+20;

    }
    printf("%d\n", sum);
    return 0;
}
