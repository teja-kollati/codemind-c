#include<stdio.h>
void cube(float a)
{
    float sa,v;
    sa=6*a*a;
    v=a*a*a;
    printf("Surface area = %0.2f and Volume = %0.2f",sa,v);
}
int main()
{
    float a;
    scanf("%f",&a);
    cube(a);
}