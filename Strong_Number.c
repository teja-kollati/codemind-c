#include<stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i = n; i > 0; i--){
        fact *= i;
    }
    return fact;
}
int isStrong(int n){
    int t = n;
    int num = 0;
    while(t > 0){
        int rem = t % 10;
        int temp = factorial(rem);
        num += temp;
        t /= 10;
    }
    if(num == n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t > 0){
        int n;
        scanf("%d",&n);
        if(isStrong(n) == 1){
            printf("Strong
");
        }
        else{
            printf("Not Strong
");
        }
        t--;
    }
}