///1.Write a C program to perform input/output of all basic data types.
#include<stdio.h>
int main()
{
  char ch;
  int i;
  float f;
  double d;

  printf("Enter a character types value =");
  scanf("%c",&ch);

  printf("Enter a integer value = ");
  scanf("%d",&i);

  printf("Enter a floating point value = ");
  scanf("%f",&f);

  printf("Enter a double types value = ");
  scanf("%lf",&d);

  printf("\n\n%c is a character types value\n",ch);
  printf("%d is an integer value\n",i);
  printf("%f is a floating point value\n",f);
  printf("%lf is a double types value",d);

  getch();
}
