#include<stdio.h>
int main(){
    char str[50];
    scanf("%[^
]",str);
    int count = 0;
    for(int i = 0; str[i] != NULL; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            count++;
        }
    }
    printf("%d",count);
}