#include<stdio.h>
int color(char c)
{
    if(c=='V')
    {
        return 0;
    }
    else if(c=='I')
    {
        return 1;
    }
    else if(c=='B')
    {
        return 2;
    }
    else if(c=='G')
    {
        return 3;
    }
    else if(c=='Y')
    {
        return 4;
    }
    else if(c=='O')
    {
        return 5;
    }
    else if(c=='R')
    {
        return 6;
    }
}
int main()
{
    char c;
    scanf("%c",&c);
    int a;
    a=color(c);
    if(a==0)
    {
        printf("Violet");
    }
    else if(a==1)
    {
        printf("Indigo");
    }
    else if(a==2)
    {
        printf("Blue");
    }
    else if(a==3)
    {
        printf("Green");
    }
    else if(a==4)
    {
        printf("Yellow");
    }
    else if(a==5)
    {
        printf("Orange");
    }
    else if(a==6)
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}