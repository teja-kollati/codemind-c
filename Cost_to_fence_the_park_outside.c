#include<stdio.h>
int main()
{
    int l,b,w,c,cost,area1,area2,area3;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area1=(l+2*w)*(b+2*w);
    area2=l*b;
    area3=area1-area2;
    cost=c*area3;
    printf("%d",cost);
}