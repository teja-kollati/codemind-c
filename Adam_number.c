#include<stdio.h>
#include<math.h>
int main()
{
    int n,q,sn1,sn2,r,rsn2,s=0;
    scanf("%d",&n);
    sn1=n*n;
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    sn2=s*s;
    q=sn2;
    s=0;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        s=s*10+r;
    }
    rsn2=s;
    if(sn1==rsn2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}