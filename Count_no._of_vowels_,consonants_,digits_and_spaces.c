#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i,c1=0,c2=0,c3=0,c4=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9')
        {
            c3++;
        }
        else if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c1++;
        }
        else if(str[i]==' ')
        {
            c4++;
        }
        else
        {
            c2++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",c1,c2,c3,c4);
}