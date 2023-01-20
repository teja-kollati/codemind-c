#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    char max='a';
    int i;
    while(str[i]!=NULL)
    {
        if(str[i]>max)
        {
            max=str[i];
        }
        i++;
    }
    printf("%c",max);
}