#include<stdio.h>
int main()
{
    int m,n,r,a,b;
    b=0;
    scanf("%d%d",&m,&n);
    for(a=m;a<=n;a++)
    {
        if(a%3==0)
        {
            b=b+1;
        }
    }
    printf("%d",b);
}

