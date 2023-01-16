#include<stdio.h>
int main()
{
    int n,i,j,c1,c2=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c1=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c1++;
                    if(c1>2)
                    {
                        c2++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d",c2);
}