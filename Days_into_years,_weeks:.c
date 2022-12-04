#include<stdio.h>
void days(int d)
{
    int y,w;
    y=d/365;
    w=(d-y*365)/7;
    printf("%d
%d",y,w);
}
int main()
{
    int d;
    scanf("%d",&d);
    days(d);
}