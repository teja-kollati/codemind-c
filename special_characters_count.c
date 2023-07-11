#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^
]",str);
    int count = 0;
    for(int i = 0; str[i] != NULL; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            count++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z'){
            count++;
        }
        else if(str[i] == ' '){
            count++;
        }
    }
    printf("%d",strlen(str) - count);
}