#include<stdio.h>
void circle(int r)
{
    float a,p;
    a=3.14*r*r;
    p=2*3.14*r;
    printf("%0.2f
%0.2f",a,p);
}
int main()
{
    int r;
    scanf("%d",&r);
    circle(r);
}