#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^
]",str);
    int count = 0;
    for(int i = 0; str[i] != NULL; i++){
        if(str[i] == ' '){
            count++;
        }
    }
    printf("%d",count);
}