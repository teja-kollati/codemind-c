#include<stdio.h>
void inch(int h)
{
    float cm;
    cm=2.54*h;
    printf("%0.2f",cm);
}
int main()
{
    int h;
    scanf("%d",&h);
    inch(h);
}