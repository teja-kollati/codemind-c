#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,a,b,k,c;
        scanf("%ld%ld%ld%ld",&n,&a,&b,&k);
        if(a%b==0)
        {
            c=n/b-n/a;
        }
        else if(b%a==0)
        {
            c=n/a-n/b;
        }
        else
        {
            c=n/a+n/b-2*(n/(a*b));
        }
        if(c>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}