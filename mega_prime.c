#include<stdio.h>
int main()
{
    int n,i,d,c1=0,c2=0,c3=0;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c1++;
        }
    }
    if(c1==0)
    {
        while(n!=0)
        {
            d=n%10;
            for(i=2;i<d;i++)
            {
                if(d%i==0)
                {
                    c2++;
                }
            }
            if(d==1)
            {
                c3++;
            }
            n=n/10;
        }
    }
    if(c1==0 && c2==0 && c3==0)
    {
        printf("Mega Prime");
    }
    else
    {
        printf("Not Mega Prime");
    }
}