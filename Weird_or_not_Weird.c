#include<stdio.h>
int weird(int n)
{
    if(n%2!=0)
    {
        return 0;
    }
    else if(n>=2 && n<=5)
    {
        return 1;
    }
    else if(n>=6 && n<=20)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=weird(n);
    if(a==0)
    {
        printf("weird");
    }
    else
    {
        printf("not weird");
    }
}