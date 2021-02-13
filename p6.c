///Problem 6: Write a C program to print following Pyramid:
///*
///**
///***
///****
///*****

#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    getch();
}
