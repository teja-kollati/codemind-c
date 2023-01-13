#include<stdio.h>
int main()
{
    int a,b,n,i,c=0;
    scanf("%d%d%d",&a,&b,&n);
    for(i=a;i<=b;i++)
    {
        if(i%n==0)
        {
            c++;
        }
    }
    printf("%d",c);
}