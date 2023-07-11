#include<stdio.h>
#include<string.h>
void tolowercase(char * word){
    for(int i = 0; i < strlen(word) - 1; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] += 32;
        }
    }
}
int main(){
    char word[50];
    scanf("%[^
]",word);
    tolowercase(word);
    int len = strlen(word);
    int i = 0;
    int j = len - 1;
    int status = 1;
    while(i < j){
        if(word[i] != word[j]){
            status = 0;
            break;
        }
        i++;
        j--;
    }
    if(status == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}