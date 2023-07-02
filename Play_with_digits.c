#include<stdio.h>
int findsum(int n){
    int sum = 0;
    if(n < 10){
        return n;
    }
    else{
        while(n > 0){
            sum += (n % 10);
            n /= 10;
        }
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += findsum(arr[i]);
    }
    printf("%d",sum);
}