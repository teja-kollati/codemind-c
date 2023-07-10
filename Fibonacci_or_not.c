#include<stdio.h>
int isfibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    if(n == 0 || n == 1){
        return 1;
    }
    while(1){
        c = a + b;
        if(c == n){
            return 1;
            break;
        }
        if(c > n){
            return -1;
            break;
        }
        a = b;
        b = c;
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(isfibonacci(n) == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}