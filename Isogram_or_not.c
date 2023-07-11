#include<stdio.h>
#include<string.h>
int count(char * str,char ch){
    int c = 0;
    for(int i = 0; i < strlen(str) - 1; i++){
        if(str[i] == ch){
            c++;
        }
    }
    return c;
}
int main(){
    char string[50];
    scanf("%s",string);
    int status;
    for(int i = 0; i < strlen(string) - 1; i++){
        if(count(string,string[i]) != 1){
            status = 0;
            break;
        }
        else{
            status = 1;
        }
    }
    if(status == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}