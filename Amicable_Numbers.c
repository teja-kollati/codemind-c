#include<stdio.h>
int factorSum(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    return sum;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum1 = factorSum(a);
    int sum2 = factorSum(b);
    if(a == sum2 && b == sum1){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}