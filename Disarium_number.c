#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,m,s=0;
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
        d=log10(m)+1;
        r=m%10;
        m=m/10;
        s=s+pow(r,d);
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}