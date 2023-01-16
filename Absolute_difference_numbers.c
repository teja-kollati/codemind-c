#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,d,k,x,y;
    scanf("%d%d",&n,&a);
    b=pow(10,a);
    d=log10(n)+1;
    k=pow(10,d-a);
    x=n/k;
    y=n%b;
    printf("%d",abs(y-x));
}