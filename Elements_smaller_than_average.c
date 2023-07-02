#include<stdio.h>
int average(int *arr, int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum += arr[i];
    }
    return sum / n;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    int avrg = average(arr,n);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= avrg){
            count++;
        }
    }
    printf("%d",count);
}