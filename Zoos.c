#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,x,y;
    while(str[i]!=NULL)
    {
        if(str[i]=='z')
        {
            x++;
        }
        else
        {
            y++;
        }
        i++;
    }
    if(2*x==y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}