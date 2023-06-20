#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int odd_sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            odd_sum +=arr[i];
        }
    }
    printf("%d",odd_sum);
}