#include<stdio.h>
int isprime(int n){
    if(n <= 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        for(int i = 2; i <= n/2 + 1; i++){
            if(n % i == 0){
                return 0;
                break;
            }
        }
        return 1;
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i = a; i <= b; i++){
        if(isprime(i) == 1){
            printf("%d
",i);
        }
    }
}