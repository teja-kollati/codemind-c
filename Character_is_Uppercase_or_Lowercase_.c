#include<stdio.h>
char alpha(char c)
{
    if(c>='A' && c<='Z')
    {
        return 0;
    }
    else if(c>='a' && c<='z')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    char c,a;
    scanf("%c",&c);
    a=alpha(c);
    if(a==0)
    {
        printf("uppercase alphabet");
    }
    else if(a==1)
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}