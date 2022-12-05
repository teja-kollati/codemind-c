#include<stdio.h>
void year(int y)
{
    int a;
    a=y%100;
    printf("%0.2d",a);
}
int main()
{
    int y;
    scanf("%d",&y);
    year(y);
}