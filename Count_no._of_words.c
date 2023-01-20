#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,count=1;
    while(str[i]!=NULL)
    {
        if(str[i]==' ')
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
}