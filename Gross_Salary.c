#include<stdio.h>
float salary(int b)
{
    float h,d,g;
    if(b<=10000)
    {
        d=0.8*b;
        h=0.2*b;
    }
    else if(b<=20000)
    {
        d=0.9*b;
        h=0.25*b;
    }
    else
    {
        d=0.95*b;
        h=0.3*b;
    }
    g=b+h+d;
}
int main()
{
    int b;
    scanf("%d",&b);
    float a;
    a=salary(b);
    printf("%0.2f",a);
}