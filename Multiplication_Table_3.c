#include<stdio.h>
int main()
{
    int n,a,b,p,i;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        p=n*i;
        printf("%d x %d = %d
",n,i,p);
    }
}