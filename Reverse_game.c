#include<stdio.h>
void reversenum(int n){
    int num = 0;
    while(n > 0){
        int rem = n % 10;
        num = num * 10 + rem;
        n /= 10;
    }
    printf("%d ",num);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        reversenum(arr[i]);
    }
}