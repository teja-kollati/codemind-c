#include<stdio.h>
int isprime(int n){
    for(int i = 2; i < n/2 + 1; i++){
        if(n % i == 0){
            return -1;
            break;
        }
    }
    return 1;
}
int nearestprime(int n){
    int n1 = n - 1;
    int n2 = n + 1;
    while(1){
        if(isprime(n) == 1){
            return n;
            break;
        }
        if(isprime(n1) == 1){
            return n1;
            break;
        }
        if(isprime(n2) == 1){
            return n2;
            break;
        }
        n1--;
        n2++;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t != 0){
        int n;
        scanf("%d",&n);
        int nearprime = nearestprime(n);
        printf("%d
",nearprime);
        t--;
    }
}