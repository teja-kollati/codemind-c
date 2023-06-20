#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int even_sum = 0;
    int odd_sum = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            even_sum += arr[i];
        }
        else{
            odd_sum += arr[i];
        }
    }
    if(even_sum > odd_sum){
        printf("%d",even_sum - odd_sum);
    }
    else{
        printf("%d",odd_sum - even_sum);
    }
}