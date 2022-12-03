#include<stdio.h>
#include<math.h>
void com(float p,float r,float t)
{
    float ci;
    ci=p*pow(1+(r/100),t)-p;
    printf("%0.2f",ci);
}
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    com(p,r,t);
}