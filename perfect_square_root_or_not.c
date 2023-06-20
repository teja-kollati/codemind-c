#include<stdio.h>
int isperfectsquare(int n){
    for(int i = 1; i <= n/2; i++){
        if(i * i == n){
            return 1;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    if(isperfectsquare(n) == 1){
        printf("True");
    }
    else{
        printf("False");
    }
}